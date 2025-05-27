#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // 1. Вывод нечетных чисел от 1 до 21
        /*
    {

        cout << "1. Нечетные числа 1-21:\n";
        
        // while
        int i = 1;
        while(i <= 21) {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
        
        // do-while
        i = 1;
        do {
            cout << i << " ";
            i += 2;
        } while(i <= 21);
        cout << endl;
        
        // for
        for(int i = 1; i <= 21; i += 2) {
            cout << i << " ";
        }
        cout << endl << endl;
    }
         */

         /*
    // 2. Вывод четных чисел от 60 до 10 в обратном порядке
    {
        cout << "2. Четные числа 60-10 в обратном порядке:\n";
        
        // while
        int i = 60;
        while(i >= 10) {
            cout << i << endl;
            i -= 2;
        }
        cout << endl;
        
        // do-while
        i = 60;
        do {
            cout << i << endl;
            i -= 2;
        } while(i >= 10);
        cout << endl;
        
        // for
        for(int i = 60; i >= 10; i -= 2) {
            cout << i << endl;
        }
        cout << endl;
    }
         */

    /*
    // 3. Вывод чисел с шагом 0.4
    {
        cout << "3. Числа с шагом 0.4:\n";
        
        // while
        int i = 10;
        while(i <= 25) {
            cout << i << " " << i + 0.4 << endl;
            i++;
        }
        cout << endl;
        
        // do-while
        i = 10;
        do {
            cout << i << " " << i + 0.4 << endl;
            i++;
        } while(i <= 25);
        cout << endl;
        
        // for
        for(int i = 10; i <= 25; i++) {
            cout << i << " " << i + 0.4 << endl;
        }
        cout << endl;
    }
    */

    /*
    // 4. Вывод чисел с особым шагом
    {
        cout << "4. Числа с особым шагом:\n";
        
        // while
        int i = 25;
        while(i <= 35) {
            cout << i << " " << i + 0.5 << " " << i - 0.2 << endl;
            i++;
        }
        cout << endl;
        
        // do-while
        i = 25;
        do {
            cout << i << " " << i + 0.5 << " " << i - 0.2 << endl;
            i++;
        } while(i <= 35);
        cout << endl;
        
        // for
        for(int i = 25; i <= 35; i++) {
            cout << i << " " << i + 0.5 << " " << i - 0.2 << endl;
        }
        cout << endl;
    }
    */

    /*
    // 5. Таблица перевода фунтов в килограммы
    {
        cout << "5. Таблица перевода фунтов в кг:\n";
        cout << "Фунты\tКг\n";
        
        // while
        int pounds = 1;
        while(pounds <= 10) {
            cout << pounds << "\t" << pounds * 0.453 << endl;
            pounds++;
        }
        cout << endl;
        
        // do-while
        pounds = 1;
        do {
            cout << pounds << "\t" << pounds * 0.453 << endl;
            pounds++;
        } while(pounds <= 10);
        cout << endl;
        
        // for
        for(int pounds = 1; pounds <= 10; pounds++) {
            cout << pounds << "\t" << pounds * 0.453 << endl;
        }
        cout << endl;
    }
    */

    /*
    // 6. Таблица перевода долларов в рубли
    {
        cout << "6. Таблица перевода долларов в рубли:\n";
        double rate;
        cout << "Введите курс доллара: ";
        cin >> rate;
        cout << "USD\tRUB\n";
        
        // while
        int usd = 5;
        while(usd <= 120) {
            cout << usd << "\t" << usd * rate << endl;
            usd += 5;
        }
        cout << endl;
        
        // do-while
        usd = 5;
        do {
            cout << usd << "\t" << usd * rate << endl;
            usd += 5;
        } while(usd <= 120);
        cout << endl;
        
        // for
        for(int usd = 5; usd <= 120; usd += 5) {
            cout << usd << "\t" << usd * rate << endl;
        }
        cout << endl;
    }
    */

    /*
    // 7. Таблица стоимости товара
    {
        cout << "7. Таблица стоимости товара:\n";
        double price;
        cout << "Введите цену за 1 шт.: ";
        cin >> price;
        cout << "Кол-во\tСтоимость\n";
        
        // while
        int count = 10;
        while(count <= 100) {
            cout << count << "\t" << count * price << endl;
            count += 10;
        }
        cout << endl;
        
        // do-while
        count = 10;
        do {
            cout << count << "\t" << count * price << endl;
            count += 10;
        } while(count <= 100);
        cout << endl;
        
        // for
        for(int count = 10; count <= 100; count += 10) {
            cout << count << "\t" << count * price << endl;
        }
        cout << endl;
    }
    */

    /*
    // 8. Таблица перевода дюймов в сантиметры
    {
        cout << "8. Таблица перевода дюймов в см:\n";
        cout << "Дюймы\tСм\n";
        
        // while
        int inches = 2;
        while(inches <= 12) {
            cout << inches << "\t" << inches * 2.54 << endl;
            inches += 2;
        }
        cout << endl;
        
        // do-while
        inches = 2;
        do {
            cout << inches << "\t" << inches * 2.54 << endl;
            inches += 2;
        } while(inches <= 12);
        cout << endl;
        
        // for
        for(int inches = 2; inches <= 12; inches += 2) {
            cout << inches << "\t" << inches * 2.54 << endl;
        }
        cout << endl;
    }
    */

    /*
    // 9. Кубы чисел в обратном порядке
    {
        cout << "9. Кубы чисел в обратном порядке:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = B;
        while(i >= A) {
            cout << i*i*i << " ";
            i--;
        }
        cout << endl;
        
        // do-while
        i = B;
        do {
            cout << i*i*i << " ";
            i--;
        } while(i >= A);
        cout << endl;
        
        // for
        for(int i = B; i >= A; i--) {
            cout << i*i*i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 10. Числа, оканчивающиеся на X
    {
        cout << "10. Числа, оканчивающиеся на X:\n";
        int A, B, X;
        cout << "Введите A, B (A <= B) и X: ";
        cin >> A >> B >> X;
        
        // while
        int i = A;
        while(i <= B) {
            if(abs(i % 10) == X) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(abs(i % 10) == X) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(abs(i % 10) == X) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 11. Числа, оканчивающиеся на X или Y
    {
        cout << "11. Числа, оканчивающиеся на X или Y:\n";
        int A, B, X, Y;
        cout << "Введите A, B (A <= B), X и Y: ";
        cin >> A >> B >> X >> Y;
        
        // while
        int i = A;
        while(i <= B) {
            int last = abs(i % 10);
            if(last == X || last == Y) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            int last = abs(i % 10);
            if(last == X || last == Y) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            int last = abs(i % 10);
            if(last == X || last == Y) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 12. Числа, оканчивающиеся на четную цифру
    {
        cout << "12. Числа, оканчивающиеся на четную цифру:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = A;
        while(i <= B) {
            if(abs(i % 10) % 2 == 0) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(abs(i % 10) % 2 == 0) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(abs(i % 10) % 2 == 0) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 13. Положительные числа
    {
        cout << "13. Положительные числа:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = A;
        while(i <= B) {
            if(i > 0) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(i > 0) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(i > 0) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 14. Числа, кратные трем
    {
        cout << "14. Числа, кратные трем:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = A;
        while(i <= B) {
            if(i % 3 == 0) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(i % 3 == 0) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(i % 3 == 0) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 15. Четные числа, кратные трем
    {
        cout << "15. Четные числа, кратные трем:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = A;
        while(i <= B) {
            if(i % 2 == 0 && i % 3 == 0) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(i % 2 == 0 && i % 3 == 0) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(i % 2 == 0 && i % 3 == 0) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 16. Отрицательные четные числа
    {
        cout << "16. Отрицательные четные числа:\n";
        int A, B;
        cout << "Введите A и B (A <= B): ";
        cin >> A >> B;
        
        // while
        int i = A;
        while(i <= B) {
            if(i < 0 && i % 2 == 0) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = A;
        do {
            if(i < 0 && i % 2 == 0) cout << i << " ";
            i++;
        } while(i <= B);
        cout << endl;
        
        // for
        for(int i = A; i <= B; i++) {
            if(i < 0 && i % 2 == 0) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 17. Двухзначные числа с разными цифрами
    {
        cout << "17. Двухзначные числа с разными цифрами:\n";
        
        // while
        int i = 10;
        while(i <= 99) {
            int d1 = i / 10;
            int d2 = i % 10;
            if(d1 != d2) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = 10;
        do {
            int d1 = i / 10;
            int d2 = i % 10;
            if(d1 != d2) cout << i << " ";
            i++;
        } while(i <= 99);
        cout << endl;
        
        // for
        for(int i = 10; i <= 99; i++) {
            int d1 = i / 10;
            int d2 = i % 10;
            if(d1 != d2) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 18. Двухзначные числа с цифрами, отличающимися не более чем на 1
    {
        cout << "18. Двухзначные числа с цифрами, отличающимися не более чем на 1:\n";
        
        // while
        int i = 10;
        while(i <= 99) {
            int d1 = i / 10;
            int d2 = i % 10;
            if(abs(d1 - d2) <= 1) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = 10;
        do {
            int d1 = i / 10;
            int d2 = i % 10;
            if(abs(d1 - d2) <= 1) cout << i << " ";
            i++;
        } while(i <= 99);
        cout << endl;
        
        // for
        for(int i = 10; i <= 99; i++) {
            int d1 = i / 10;
            int d2 = i % 10;
            if(abs(d1 - d2) <= 1) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 19. Трехзначные числа, начинающиеся и заканчивающиеся на одну цифру
    {
        cout << "19. Трехзначные числа с одинаковыми первой и последней цифрами:\n";
        
        // while
        int i = 100;
        while(i <= 999) {
            int d1 = i / 100;
            int d3 = i % 10;
            if(d1 == d3) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = 100;
        do {
            int d1 = i / 100;
            int d3 = i % 10;
            if(d1 == d3) cout << i << " ";
            i++;
        } while(i <= 999);
        cout << endl;
        
        // for
        for(int i = 100; i <= 999; i++) {
            int d1 = i / 100;
            int d3 = i % 10;
            if(d1 == d3) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    /*
    // 20. Трехзначные числа с хотя бы двумя одинаковыми цифрами
    {
        cout << "20. Трехзначные числа с хотя бы двумя одинаковыми цифрами:\n";
        
        // while
        int i = 100;
        while(i <= 999) {
            int d1 = i / 100;
            int d2 = (i / 10) % 10;
            int d3 = i % 10;
            if(d1 == d2 || d1 == d3 || d2 == d3) cout << i << " ";
            i++;
        }
        cout << endl;
        
        // do-while
        i = 100;
        do {
            int d1 = i / 100;
            int d2 = (i / 10) % 10;
            int d3 = i % 10;
            if(d1 == d2 || d1 == d3 || d2 == d3) cout << i << " ";
            i++;
        } while(i <= 999);
        cout << endl;
        
        // for
        for(int i = 100; i <= 999; i++) {
            int d1 = i / 100;
            int d2 = (i / 10) % 10;
            int d3 = i % 10;
            if(d1 == d2 || d1 == d3 || d2 == d3) cout << i << " ";
        }
        cout << endl << endl;
    }
    */

    return 0;
}