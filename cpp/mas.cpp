#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    const int SIZE = 10; // Размер массива
    int arr[SIZE] = {3, -2, 5, 4, -2, 8, 5, 8, -1, 7}; // Пример массива
    
    // Вывод исходного массива
    cout << "Исходный массив: ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    /*
    // 1. Подсчитать количество максимальных элементов
    {
        int max = arr[0], count = 0;
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] > max) {
                max = arr[i];
                count = 1;
            } else if(arr[i] == max) {
                count++;
            }
        }
        cout << "1. Количество максимальных элементов: " << count << endl;
    }
    */

    /*
    // 2. Вывести номера всех минимальных элементов
    {
        int min = arr[0];
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] < min) min = arr[i];
        }
        
        cout << "2. Номера минимальных элементов: ";
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] == min) cout << i << " ";
        }
        cout << endl;
    }
    */

    /*
    // 3. Заменить все максимальные элементы нулями
    {
        int max = arr[0];
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > max) max = arr[i];
        }
        
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] == max) arr[i] = 0;
        }
        
        cout << "3. Массив после замены максимумов нулями: ";
        for(int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        // Восстановим исходный массив
        arr[5] = 8; arr[7] = 8;
    }
    */

    /*
    // 4. Заменить все минимальные элементы на значения с противоположным знаком
    {
        int min = arr[0];
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] < min) min = arr[i];
        }
        
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] == min) arr[i] = -arr[i];
        }
        
        cout << "4. Массив после замены минимумов: ";
        for(int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        // Восстановим исходный массив
        arr[1] = -2; arr[4] = -2; arr[8] = -1;
    }
    */

    /*
    // 5. Поменять местами максимальный элемент и первый
    {
        int max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > arr[max_pos]) max_pos = i;
        }
        
        swap(arr[0], arr[max_pos]);
        
        cout << "5. Массив после обмена: ";
        for(int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        // Восстановим исходный массив
        swap(arr[0], arr[max_pos]);
    }
    */

    /*
    // 6. Вывести номера всех элементов, не совпадающих с максимальным
    {
        int max = arr[0];
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > max) max = arr[i];
        }
        
        cout << "6. Номера элементов, не равных максимуму: ";
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] != max) cout << i << " ";
        }
        cout << endl;
    }
    */

    /*
    // 7. Найти номер первого минимального элемента
    {
        int min_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] < arr[min_pos]) min_pos = i;
        }
        cout << "7. Номер первого минимального элемента: " << min_pos << endl;
    }
    */

    /*
    // 8. Найти номер последнего максимального элемента
    {
        int max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] >= arr[max_pos]) max_pos = i;
        }
        cout << "8. Номер последнего максимального элемента: " << max_pos << endl;
    }
    */

    /*
    // 9. Сумма между единственными max и min
    {
        int min_pos = 0, max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] < arr[min_pos]) min_pos = i;
            if(arr[i] > arr[max_pos]) max_pos = i;
        }
        
        if(max_pos > min_pos) {
            cout << "9. Максимальный элемент встречается позже минимального" << endl;
        } else {
            int sum = 0;
            int start = min(min_pos, max_pos);
            int end = max(min_pos, max_pos);
            
            for(int i = start + 1; i < end; i++) {
                sum += arr[i];
            }
            cout << "9. Сумма между min и max: " << sum << endl;
        }
    }
    */

    /*
    // 10. Найти номер первого максимального элемента
    {
        int max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > arr[max_pos]) max_pos = i;
        }
        cout << "10. Номер первого максимального элемента: " << max_pos << endl;
    }
    */

    /*
    // 11. Найти номер последнего минимального элемента
    {
        int min_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] <= arr[min_pos]) min_pos = i;
        }
        cout << "11. Номер последнего минимального элемента: " << min_pos << endl;
    }
    */

    /*
    // 12. Сумма между первым max и последним min
    {
        int first_max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > arr[first_max_pos]) first_max_pos = i;
        }
        
        int last_min_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] <= arr[last_min_pos]) last_min_pos = i;
        }
        
        if(first_max_pos > last_min_pos) {
            cout << "12. Максимальный элемент встречается позже минимального" << endl;
        } else {
            int sum = 0;
            int start = min(first_max_pos, last_min_pos);
            int end = max(first_max_pos, last_min_pos);
            
            for(int i = start + 1; i < end; i++) {
                sum += arr[i];
            }
            cout << "12. Сумма между первым max и последним min: " << sum << endl;
        }
    }
    */

    /*
    // 13. Поменять местами первый минимальный и последний максимальный элементы
    {
        int first_min_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] < arr[first_min_pos]) first_min_pos = i;
        }
        
        int last_max_pos = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] >= arr[last_max_pos]) last_max_pos = i;
        }
        
        swap(arr[first_min_pos], arr[last_max_pos]);
        
        cout << "13. Массив после обмена: ";
        for(int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        // Восстановим исходный массив
        swap(arr[first_min_pos], arr[last_max_pos]);
    }
    */

    /*
    // 14. Найти максимум из отрицательных элементов
    {
        int max_neg = INT_MIN;
        bool found = false;
        
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] < 0 && arr[i] > max_neg) {
                max_neg = arr[i];
                found = true;
            }
        }
        
        if(found) {
            cout << "14. Максимум из отрицательных: " << max_neg << endl;
        } else {
            cout << "14. Отрицательных элементов нет" << endl;
        }
    }
    */

    /*
    // 15. Найти минимум из положительных элементов
    {
        int min_pos = INT_MAX;
        bool found = false;
        
        for(int i = 0; i < SIZE; i++) {
            if(arr[i] > 0 && arr[i] < min_pos) {
                min_pos = arr[i];
                found = true;
            }
        }
        
        if(found) {
            cout << "15. Минимум из положительных: " << min_pos << endl;
        } else {
            cout << "15. Положительных элементов нет" << endl;
        }
    }
    */

    /*
    // 16. Найти максимум из модулей элементов
    {
        int max_abs = abs(arr[0]);
        for(int i = 1; i < SIZE; i++) {
            if(abs(arr[i]) > max_abs) max_abs = abs(arr[i]);
        }
        cout << "16. Максимум из модулей: " << max_abs << endl;
    }
    */

    /*
    // 17. Количество пар с заданной разностью
    {
        int diff = 3; // Заданная разность
        int count = 0;
        
        for(int i = 0; i < SIZE - 1; i++) {
            if(abs(arr[i] - arr[i+1]) == diff) count++;
        }
        cout << "17. Количество пар с разностью " << diff << ": " << count << endl;
    }
    */

    /*
    // 18. Количество элементов, больших предыдущего
    {
        int count = 0;
        for(int i = 1; i < SIZE; i++) {
            if(arr[i] > arr[i-1]) count++;
        }
        cout << "18. Количество элементов, больших предыдущего: " << count << endl;
    }
    */

    /*
    // 19. Количество пар, где предыдущий кратен последующему
    {
        int count = 0;
        for(int i = 0; i < SIZE - 1; i++) {
            if(arr[i+1] != 0 && arr[i] % arr[i+1] == 0) count++;
        }
        cout << "19. Количество пар (предыдущий кратен последующему): " << count << endl;
    }
    */

    /*
    // 20. Количество пар, где предыдущий меньше последующего
    {
        int count = 0;
        for(int i = 0; i < SIZE - 1; i++) {
            if(arr[i] < arr[i+1]) count++;
        }
        cout << "20. Количество пар (предыдущий < последующий): " << count << endl;
    }
    */

    return 0;
}