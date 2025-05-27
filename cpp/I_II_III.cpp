#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    /*
    // I Упражнение 1: 10sinx + |x^4 - x^5|
    {
        double x;
        cout << "Упражнение 1. Введите x: ";
        cin >> x;
        double result = 10 * sin(x) + abs(pow(x, 4) - pow(x, 5));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 2: e^(-x) - cosx + sin(2xy)
    {
        double x, y;
        cout << "Упражнение 2. Введите x и y: ";
        cin >> x >> y;
        double result = exp(-x) - cos(x) + sin(2 * x * y);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 3: x^4 + |x + 1|
    {
        double x;
        cout << "Упражнение 3. Введите x: ";
        cin >> x;
        double result = pow(x, 4) + abs(x + 1);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 4: (sinx + cosy + 0.43) / (tgx)
    {
        double x, y;
        cout << "Упражнение 4. Введите x и y: ";
        cin >> x >> y;
        double result = (sin(x) + cos(y) + 0.43) / tan(x);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 5: (0.125x + |sinx|) / (1.5x^2 + cosx)
    {
        double x;
        cout << "Упражнение 5. Введите x: ";
        cin >> x;
        double result = (0.125 * x + abs(sin(x))) / (1.5 * pow(x, 2) + cos(x));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 6: (x + y)/(xy - 12) - (x + 1)/(34 + x)
    {
        double x, y;
        cout << "Упражнение 6. Введите x и y: ";
        cin >> x >> y;
        double result = (x + y) / (x * y - 12) - (x + 1) / (34 + x);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 7: (sinx + cosy)/(cosx - siny) * tg(xy)
    {
        double x, y;
        cout << "Упражнение 7. Введите x и y: ";
        cin >> x >> y;
        double result = (sin(x) + cos(y)) / (cos(x) - sin(y)) * tan(x * y);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 8: (1 + e^(y-1))/(1 + x^2|y - tgx|)
    {
        double x, y;
        cout << "Упражнение 8. Введите x и y: ";
        cin >> x >> y;
        double result = (1 + exp(y - 1)) / (1 + pow(x, 2) * abs(y - tan(x)));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 9: (x^3 - x^2 - 7x)/(x^3 - 15x)
    {
        double x;
        cout << "Упражнение 9. Введите x: ";
        cin >> x;
        double result = (pow(x, 3) - pow(x, 2) - 7 * x) / (pow(x, 3) - 15 * x);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 10: 1 + x/3 + (x + x^3 + 4)/ln(1 + x^2) * cos(12y - 4)
    {
        double x, y;
        cout << "Упражнение 10. Введите x и y: ";
        cin >> x >> y;
        double result = 1 + x / 3 + (x + pow(x, 3) + 4) / log(1 + pow(x, 2)) * cos(12 * y - 4);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 11: ln|cosx|
    {
        double x;
        cout << "Упражнение 11. Введите x: ";
        cin >> x;
        double result = log(abs(cos(x)));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 12: (1 + sin√(x + 1))/(cos(12y - 4))
    {
        double x, y;
        cout << "Упражнение 12. Введите x и y: ";
        cin >> x >> y;
        double result = (1 + sin(sqrt(x + 1))) / cos(12 * y - 4);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 13: (a^2 + b^2)/(1 - a^3 - b)
    {
        double a, b;
        cout << "Упражнение 13. Введите a и b: ";
        cin >> a >> b;
        double result = (pow(a, 2) + pow(b, 2)) / (1 - pow(a, 3) - b);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 14: (1 + sin^2(x + y))/(2 + |x|) + x
    {
        double x, y;
        cout << "Упражнение 14. Введите x и y: ";
        cin >> x >> y;
        double result = (1 + pow(sin(x + y), 2)) / (2 + abs(x)) + x;
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 15: x*lnx + y/(3√(1 + x^2y^2))
    {
        double x, y;
        cout << "Упражнение 15. Введите x и y: ";
        cin >> x >> y;
        double result = x * log(x) + y / (3 * sqrt(1 + pow(x, 2) * pow(y, 2)));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 16: sinx + √(sinx - 1) - √(sinx - 1)
    {
        double x;
        cout << "Упражнение 16. Введите x: ";
        cin >> x;
        double result = sin(x) + sqrt(sin(x) - 1) - sqrt(sin(x) - 1);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 17: cosx/(π - 2x) + 16x*cos(xy)
    {
        double x, y;
        cout << "Упражнение 17. Введите x и y: ";
        cin >> x >> y;
        double result = cos(x) / (M_PI - 2 * x) + 16 * x * cos(x * y);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 18: 2ctg3x - 1/(12x^2 + 7x - 5)
    {
        double x;
        cout << "Упражнение 18. Введите x: ";
        cin >> x;
        double result = 2 * (1 / tan(3 * x)) - 1 / (12 * pow(x, 2) + 7 * x - 5);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 19: (b + √(b^2 + 4ac))/(2a) - a^3 + b^(-2)
    {
        double a, b, c;
        cout << "Упражнение 19. Введите a, b и c: ";
        cin >> a >> b >> c;
        double result = (b + sqrt(pow(b, 2) + 4 * a * c)) / (2 * a) - pow(a, 3) + pow(b, -2);
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // Упражнение 20: ln(y - x)(x - y/(x + x^2/4))
    {
        double x, y;
        cout << "Упражнение 20. Введите x и y: ";
        cin >> x >> y;
        double result = log(y - x) * (x - y / (x + pow(x, 2) / 4));
        cout << "Результат: " << result << endl << endl;
    }
    */

    /*
    // II Упражнение 1: Периметр квадрата по площади
    {
        double a;
        cout << "1. Введите площадь квадрата (a): ";
        cin >> a;
        double perimeter = 4 * sqrt(a);
        cout << "Периметр квадрата: " << perimeter << endl << endl;
    }
    */

    /*
    // Упражнение 2: Площадь равностороннего треугольника по периметру
    {
        double p;
        cout << "2. Введите периметр равностороннего треугольника (p): ";
        cin >> p;
        double side = p / 3;
        double area = (sqrt(3) / 4) * pow(side, 2);
        cout << "Площадь треугольника: " << area << endl << endl;
    }
    */

    /*
    // Упражнение 3: Расстояние между двумя точками
    {
        double a, b, c, d;
        cout << "3. Введите координаты первой точки (a b): ";
        cin >> a >> b;
        cout << "   Введите координаты второй точки (c d): ";
        cin >> c >> d;
        double distance = sqrt(pow(c - a, 2) + pow(d - b, 2));
        cout << "Расстояние между точками: " << distance << endl << endl;
    }
    */

    /*
    // Упражнение 4: Среднее арифметическое кубов двух чисел
    {
        double num1, num2;
        cout << "4. Введите два числа: ";
        cin >> num1 >> num2;
        double avg = (pow(num1, 3) + pow(num2, 3)) / 2;
        cout << "Среднее арифметическое кубов: " << avg << endl << endl;
    }
    */

    /*
    // Упражнение 5: Среднее геометрическое модулей двух чисел
    {
        double num1, num2;
        cout << "5. Введите два числа: ";
        cin >> num1 >> num2;
        double geom_avg = sqrt(abs(num1) * abs(num2));
        cout << "Среднее геометрическое модулей: " << geom_avg << endl << endl;
    }
    */

    /*
    // Упражнение 6: Гипотенуза прямоугольного треугольника
    {
        double a, b;
        cout << "6. Введите катеты прямоугольного треугольника (a b): ";
        cin >> a >> b;
        double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
        cout << "Гипотенуза: " << hypotenuse << endl << endl;
    }
    */

    /*
    // Упражнение 7: Площадь прямоугольного треугольника
    {
        double a, b;
        cout << "7. Введите катеты прямоугольного треугольника (a b): ";
        cin >> a >> b;
        double area = (a * b) / 2;
        cout << "Площадь треугольника: " << area << endl << endl;
    }
    */

    /*
    // Упражнение 8: Периметр прямоугольного треугольника
    {
        double a, b;
        cout << "8. Введите катеты прямоугольного треугольника (a b): ";
        cin >> a >> b;
        double c = sqrt(pow(a, 2) + pow(b, 2));
        double perimeter = a + b + c;
        cout << "Периметр треугольника: " << perimeter << endl << endl;
    }
    */

    /*
    // Упражнение 9: Ребро куба по площади полной поверхности
    {
        double s;
        cout << "9. Введите площадь полной поверхности куба (s): ";
        cin >> s;
        double edge = sqrt(s / 6);
        cout << "Ребро куба: " << edge << endl << endl;
    }
    */

    /*
    // Упражнение 10: Ребро куба по объему
    {
        double v;
        cout << "10. Введите объем куба (v): ";
        cin >> v;
        double edge = pow(v, 1.0/3.0);
        cout << "Ребро куба: " << edge << endl << endl;
    }
    */

    /*
    // Упражнение 11: Периметр треугольника по координатам вершин
    {
        double x1, y1, x2, y2, x3, y3;
        cout << "11. Введите координаты вершин треугольника (x1 y1 x2 y2 x3 y3): ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        
        double perimeter = a + b + c;
        cout << "Периметр треугольника: " << perimeter << endl << endl;
    }
    */

    /*
    // Упражнение 12: Площадь треугольника по координатам вершин
    {
        double x1, y1, x2, y2, x3, y3;
        cout << "12. Введите координаты вершин треугольника (x1 y1 x2 y2 x3 y3): ";
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        double area = abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2);
        cout << "Площадь треугольника: " << area << endl << endl;
    }
    */

    /*
    // Упражнение 13: Радиус окружности по длине
    {
        double l;
        cout << "13. Введите длину окружности (l): ";
        cin >> l;
        double radius = l / (2 * M_PI);
        cout << "Радиус окружности: " << radius << endl << endl;
    }
    */

    /*
    // Упражнение 14: Радиус окружности по площади круга
    {
        double s;
        cout << "14. Введите площадь круга (s): ";
        cin >> s;
        double radius = sqrt(s / M_PI);
        cout << "Радиус окружности: " << radius << endl << endl;
    }
    */

    /*
    // Упражнение 15: Площадь равнобедренной трапеции
    {
        double a, b, alpha;
        cout << "15. Введите основания трапеции (a b) и угол при большем основании (в градусах): ";
        cin >> a >> b >> alpha;
        
        // Переводим угол в радианы
        double alpha_rad = alpha * M_PI / 180;
        
        // Вычисляем высоту трапеции
        double h = ((b - a) / 2) * tan(alpha_rad);
        
        double area = (a + b) * h / 2;
        cout << "Площадь трапеции: " << area << endl << endl;
    }
    */

    /*
    // Упражнение 16: Площадь кольца
    {
        double r1, r2;
        cout << "16. Введите внутренний (r1) и внешний (r2) радиусы кольца: ";
        cin >> r1 >> r2;
        
        double area = M_PI * (pow(r2, 2) - pow(r1, 2));
        cout << "Площадь кольца: " << area << endl << endl;
    }
    */

    /*
    // Упражнение 17: Радиус вписанной окружности в равносторонний треугольник
    {
        double a;
        cout << "17. Введите сторону равностороннего треугольника (a): ";
        cin >> a;
        
        double radius = a * sqrt(3) / 6;
        cout << "Радиус вписанной окружности: " << radius << endl << endl;
    }
    */

    /*
    // Упражнение 18: Радиус описанной окружности около равностороннего треугольника
    {
        double a;
        cout << "18. Введите сторону равностороннего треугольника (a): ";
        cin >> a;
        
        double radius = a * sqrt(3) / 3;
        cout << "Радиус описанной окружности: " << radius << endl << endl;
    }
    */

    /*
    // Упражнение 19: Сумма членов арифметической прогрессии
    {
        double a1, d;
        int n;
        cout << "19. Введите первый член (a1), разность (d) и количество членов (n): ";
        cin >> a1 >> d >> n;
        
        double sum = (2 * a1 + d * (n - 1)) * n / 2;
        cout << "Сумма прогрессии: " << sum << endl << endl;
    }
    */

    /*
    // Упражнение 20: Сумма членов геометрической прогрессии
    {
        double b1, q;
        int n;
        cout << "20. Введите первый член (b1), знаменатель (q) и количество членов (n): ";
        cin >> b1 >> q >> n;
        
        double sum;
        if (q == 1) {
            sum = b1 * n;
        } else {
            sum = b1 * (1 - pow(q, n)) / (1 - q);
        }
        cout << "Сумма прогрессии: " << sum << endl << endl;
    }
    */

    /*
    // III Упражнение 1: Максимальное из двух вещественных чисел
    {
        double a, b;
        cout << "1. Введите два вещественных числа: ";
        cin >> a >> b;
        cout << "Максимальное: " << (a > b ? a : b) << endl << endl;
    }
    */

    /*
    // Упражнение 2: Проверка на четность
    {
        int num;
        cout << "2. Введите целое число: ";
        cin >> num;
        cout << (num % 2 == 0 ? "Четное" : "Нечетное") << endl << endl;
    }
    */

    /*
    // Упражнение 3: Проверка на нечетность
    {
        int num;
        cout << "3. Введите целое число: ";
        cin >> num;
        cout << (num % 2 != 0 ? "Нечетное" : "Четное") << endl << endl;
    }
    */

    /*
    // Упражнение 4: Проверка делимости M на N
    {
        int M, N;
        cout << "4. Введите два целых числа (M N): ";
        cin >> M >> N;
        if (N == 0) {
            cout << "Деление на ноль невозможно" << endl;
        } else if (M % N == 0) {
            cout << "Частное: " << M / N << endl;
        } else {
            cout << M << " на " << N << " нацело не делится" << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 5: Проверка окончания числа на 7
    {
        int num;
        cout << "5. Введите целое число: ";
        cin >> num;
        cout << (abs(num) % 10 == 7 ? "Оканчивается на 7" : "Не оканчивается на 7") << endl << endl;
    }
    */

    /*
    // Упражнение 6: Проверка существования решения квадратного уравнения
    {
        double a, b, c;
        cout << "6. Введите коэффициенты уравнения (a b c): ";
        cin >> a >> b >> c;
        double D = b * b - 4 * a * c;
        cout << (D >= 0 ? "Решение существует" : "Решения нет") << endl << endl;
    }
    */

    /*
    // Упражнение 7: Какая цифра двухзначного числа больше
    {
        int num;
        cout << "7. Введите двухзначное число: ";
        cin >> num;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else {
            int first = num / 10;
            int second = num % 10;
            if (first > second) {
                cout << "Первая цифра больше" << endl;
            } else if (second > first) {
                cout << "Вторая цифра больше" << endl;
            } else {
                cout << "Цифры равны" << endl;
            }
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 8: Проверка равенства цифр двухзначного числа
    {
        int num;
        cout << "8. Введите двухзначное число: ";
        cin >> num;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else {
            cout << ((num / 10 == num % 10) ? "Цифры одинаковы" : "Цифры разные") << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 9: Проверка четности суммы цифр двухзначного числа
    {
        int num;
        cout << "9. Введите двухзначное число: ";
        cin >> num;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else {
            int sum = (num / 10) + (num % 10);
            cout << (sum % 2 == 0 ? "Сумма цифр четная" : "Сумма цифр нечетная") << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 10: Проверка нечетности суммы цифр двухзначного числа
    {
        int num;
        cout << "10. Введите двухзначное число: ";
        cin >> num;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else {
            int sum = (num / 10) + (num % 10);
            cout << (sum % 2 != 0 ? "Сумма цифр нечетная" : "Сумма цифр четная") << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 11: Проверка кратности суммы цифр трем
    {
        int num;
        cout << "11. Введите двухзначное число: ";
        cin >> num;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else {
            int sum = (num / 10) + (num % 10);
            cout << (sum % 3 == 0 ? "Сумма цифр кратна 3" : "Сумма цифр не кратна 3") << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 12: Проверка кратности суммы цифр числу A
    {
        int num, A;
        cout << "12. Введите двухзначное число и число A: ";
        cin >> num >> A;
        if (num < 10 || num > 99) {
            cout << "Число не двухзначное" << endl;
        } else if (A == 0) {
            cout << "Нельзя делить на ноль" << endl;
        } else {
            int sum = (num / 10) + (num % 10);
            cout << (sum % A == 0 ? "Сумма цифр кратна " : "Сумма цифр не кратна ") << A << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 13: Сравнение первой и последней цифры трехзначного числа
    {
        int num;
        cout << "13. Введите трехзначное число: ";
        cin >> num;
        if (num < 100 || num > 999) {
            cout << "Число не трехзначное" << endl;
        } else {
            int first = num / 100;
            int last = num % 10;
            if (first > last) {
                cout << "Первая цифра больше" << endl;
            } else if (last > first) {
                cout << "Последняя цифра больше" << endl;
            } else {
                cout << "Цифры равны" << endl;
            }
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 14: Сравнение первой и второй цифры трехзначного числа
    {
        int num;
        cout << "14. Введите трехзначное число: ";
        cin >> num;
        if (num < 100 || num > 999) {
            cout << "Число не трехзначное" << endl;
        } else {
            int first = num / 100;
            int second = (num / 10) % 10;
            if (first > second) {
                cout << "Первая цифра больше" << endl;
            } else if (second > first) {
                cout << "Вторая цифра больше" << endl;
            } else {
                cout << "Цифры равны" << endl;
            }
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 15: Сравнение второй и последней цифры трехзначного числа
    {
        int num;
        cout << "15. Введите трехзначное число: ";
        cin >> num;
        if (num < 100 || num > 999) {
            cout << "Число не трехзначное" << endl;
        } else {
            int second = (num / 10) % 10;
            int last = num % 10;
            if (second > last) {
                cout << "Вторая цифра больше" << endl;
            } else if (last > second) {
                cout << "Последняя цифра больше" << endl;
            } else {
                cout << "Цифры равны" << endl;
            }
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 16: Проверка равенства всех цифр трехзначного числа
    {
        int num;
        cout << "16. Введите трехзначное число: ";
        cin >> num;
        if (num < 100 || num > 999) {
            cout << "Число не трехзначное" << endl;
        } else {
            int first = num / 100;
            int second = (num / 10) % 10;
            int third = num % 10;
            cout << ((first == second) && (second == third) ? "Все цифры одинаковы" : "Цифры разные") << endl;
        }
        cout << endl;
    }
    */

    /*
    // Упражнение 17: Проверка существования треугольника
    {
        double a, b, c;
        cout << "17. Введите длины сторон треугольника (a b c): ";
        cin >> a >> b >> c;
        cout << ((a + b > c) && (a + c > b) && (b + c > a) ? 
               "Треугольник существует" : "Треугольник не существует") << endl << endl;
    }
    */

    /*
    // Упражнение 18: Проверка прямоугольности треугольника
    {
        double a, b, c;
        cout << "18. Введите длины сторон треугольника (a b c): ";
        cin >> a >> b >> c;
        
        // Проверяем теорему Пифагора для всех комбинаций сторон
        bool isRight = false;
        if (a > b && a > c) {
            isRight = abs(a*a - (b*b + c*c)) < 1e-9;
        } else if (b > a && b > c) {
            isRight = abs(b*b - (a*a + c*c)) < 1e-9;
        } else {
            isRight = abs(c*c - (a*a + b*b)) < 1e-9;
        }
        
        cout << (isRight ? "Треугольник прямоугольный" : "Треугольник не прямоугольный") << endl << endl;
    }
    */

    /*
    // Упражнение 19: Проверка равнобедренности треугольника
    {
        double a, b, c;
        cout << "19. Введите длины сторон треугольника (a b c): ";
        cin >> a >> b >> c;
        cout << ((a == b) || (a == c) || (b == c) ? 
               "Треугольник равнобедренный" : "Треугольник не равнобедренный") << endl << endl;
    }
    */

    /*
    // Упражнение 20: Проверка равносторонности треугольника
    {
        double a, b, c;
        cout << "20. Введите длины сторон треугольника (a b c): ";
        cin >> a >> b >> c;
        cout << ((a == b) && (b == c) ? 
               "Треугольник равносторонний" : "Треугольник не равносторонний") << endl << endl;
    }
    */

    return 0;
}