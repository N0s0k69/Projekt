#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <queue>
#include <vector>

using namespace std;

// 1. Быстрая сортировка (Quick Sort)
void quickSort(vector<int> &arr, int left, int right) {
  if (left >= right)
    return;

  int pivot = arr[(left + right) / 2];
  int i = left, j = right;

  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  quickSort(arr, left, j);
  quickSort(arr, i, right);
}

// 2. Пирамидальная сортировка (Heap Sort)
void heapify(vector<int> &arr, int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;
  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(vector<int> &arr) {
  int n = arr.size();

  // Построение кучи (перегруппируем массив)
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // Один за другим извлекаем элементы из кучи
  for (int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}

// 3. Карманная сортировка (Bucket Sort)
void bucketSort(vector<int> &arr) {
  if (arr.empty())
    return;

  // Находим минимальное и максимальное значения
  int min_val = *min_element(arr.begin(), arr.end());
  int max_val = *max_element(arr.begin(), arr.end());

  // Количество карманов
  int bucket_count = arr.size();
  vector<vector<int>> buckets(bucket_count);

  // Распределяем элементы по карманам
  for (int num : arr) {
    int bucket_index =
        (num - min_val) * (bucket_count - 1) / (max_val - min_val);
    buckets[bucket_index].push_back(num);
  }

  // Сортируем каждый карман (используем сортировку вставками)
  for (auto &bucket : buckets) {
    sort(bucket.begin(), bucket.end());
  }

  // Собираем элементы обратно в исходный массив
  int index = 0;
  for (const auto &bucket : buckets) {
    for (int num : bucket) {
      arr[index++] = num;
    }
  }
}

// 4. Поразрядная сортировка (Radix Sort)
void countingSort(vector<int> &arr, int exp) {
  vector<int> output(arr.size());
  vector<int> count(10, 0);

  for (int num : arr) {
    count[(num / exp) % 10]++;
  }

  for (int i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }

  for (int i = arr.size() - 1; i >= 0; i--) {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }

  arr = output;
}

void radixSort(vector<int> &arr) {
  if (arr.empty())
    return;

  int max_val = *max_element(arr.begin(), arr.end());

  for (int exp = 1; max_val / exp > 0; exp *= 10) {
    countingSort(arr, exp);
  }
}

// 5. Сортировка подсчетом (Counting Sort)
void countingSortSimple(vector<int> &arr) {
  if (arr.empty())
    return;

  int max_val = *max_element(arr.begin(), arr.end());
  vector<int> count(max_val + 1, 0);

  for (int num : arr) {
    count[num]++;
  }

  int index = 0;
  for (int i = 0; i <= max_val; i++) {
    while (count[i] > 0) {
      arr[index++] = i;
      count[i]--;
    }
  }
}

// 6. Сортировка слиянием (Merge Sort)
void merge(vector<int> &arr, int left, int mid, int right) {
  vector<int> left_arr(arr.begin() + left, arr.begin() + mid + 1);
  vector<int> right_arr(arr.begin() + mid + 1, arr.begin() + right + 1);

  int i = 0, j = 0, k = left;

  while (i < left_arr.size() && j < right_arr.size()) {
    if (left_arr[i] <= right_arr[j]) {
      arr[k++] = left_arr[i++];
    } else {
      arr[k++] = right_arr[j++];
    }
  }

  while (i < left_arr.size()) {
    arr[k++] = left_arr[i++];
  }

  while (j < right_arr.size()) {
    arr[k++] = right_arr[j++];
  }
}

void mergeSort(vector<int> &arr, int left, int right) {
  if (left >= right)
    return;

  int mid = left + (right - left) / 2;
  mergeSort(arr, left, mid);
  mergeSort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}

// Вспомогательная функция для вывода массива
void printArray(const vector<int> &arr) {
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
  vector<int> arr_copy;

  cout << "Original array: ";
  printArray(arr);

  // 1. Быстрая сортировка
  arr_copy = arr;
  quickSort(arr_copy, 0, arr_copy.size() - 1);
  cout << "Quick Sort: ";
  printArray(arr_copy);

  // 2. Пирамидальная сортировка
  arr_copy = arr;
  heapSort(arr_copy);
  cout << "Heap Sort: ";
  printArray(arr_copy);

  // 3. Карманная сортировка
  arr_copy = arr;
  bucketSort(arr_copy);
  cout << "Bucket Sort: ";
  printArray(arr_copy);

  // 4. Поразрядная сортировка
  arr_copy = arr;
  radixSort(arr_copy);
  cout << "Radix Sort: ";
  printArray(arr_copy);

  // 5. Сортировка подсчетом
  arr_copy = arr;
  countingSortSimple(arr_copy);
  cout << "Counting Sort: ";
  printArray(arr_copy);

  // 6. Сортировка слиянием
  arr_copy = arr;
  mergeSort(arr_copy, 0, arr_copy.size() - 1);
  cout << "Merge Sort: ";
  printArray(arr_copy);

  return 0;
}