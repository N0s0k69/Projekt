#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    // Упражнение 1: Название месяца по номеру
     /*
    {
        int month;
        cout << "1. Введите номер месяца (1-12): ";
        cin >> month;
        
        switch(month) {
            case 1: cout << "Январь"; break;
            case 2: cout << "Февраль"; break;
            case 3: cout << "Март"; break;
            case 4: cout << "Апрель"; break;
            case 5: cout << "Май"; break;
            case 6: cout << "Июнь"; break;
            case 7: cout << "Июль"; break;
            case 8: cout << "Август"; break;
            case 9: cout << "Сентябрь"; break;
            case 10: cout << "Октябрь"; break;
            case 11: cout << "Ноябрь"; break;
            case 12: cout << "Декабрь"; break;
            default: cout << "Неверный номер месяца";
        }
        cout << endl << endl;
    }
    */
   
    // Упражнение 2: Дней до конца месяца
     /*
    {
        int day;
        cout << "2. Введите день месяца (1-31): ";
        cin >> day;
        
        if (day < 1 || day > 31) {
            cout << "Неверный день месяца";
        } else {
            cout << "До конца месяца осталось " << 31 - day << " дней";
        }
        cout << endl << endl;
    }
     */

    // Упражнение 3: Название масти карты
     /*
    {
        int m;
        cout << "3. Введите номер масти (1-4): ";
        cin >> m;
        
        switch(m) {
            case 1: cout << "Пики"; break;
            case 2: cout << "Трефы"; break;
            case 3: cout << "Бубны"; break;
            case 4: cout << "Червы"; break;
            default: cout << "Неверный номер масти";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 4: Достоинство карты
     /*
    {
        int k;
        cout << "4. Введите номер карты (6-14): ";
        cin >> k;
        
        switch(k) {
            case 6: cout << "Шестерка"; break;
            case 7: cout << "Семерка"; break;
            case 8: cout << "Восьмерка"; break;
            case 9: cout << "Девятка"; break;
            case 10: cout << "Десятка"; break;
            case 11: cout << "Валет"; break;
            case 12: cout << "Дама"; break;
            case 13: cout << "Король"; break;
            case 14: cout << "Туз"; break;
            default: cout << "Неверный номер карты";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 5: Полное название карты
     /*
    {
        int m, k;
        cout << "5. Введите номер масти (1-4) и номер карты (6-14): ";
        cin >> m >> k;
        
        // Достоинство карты
        string card;
        switch(k) {
            case 6: card = "Шестерка"; break;
            case 7: card = "Семерка"; break;
            case 8: card = "Восьмерка"; break;
            case 9: card = "Девятка"; break;
            case 10: card = "Десятка"; break;
            case 11: card = "Валет"; break;
            case 12: card = "Дама"; break;
            case 13: card = "Король"; break;
            case 14: card = "Туз"; break;
            default: card = "Неизвестная карта";
        }
        
        // Масть карты
        string suit;
        switch(m) {
            case 1: suit = "пик"; break;
            case 2: suit = "треф"; break;
            case 3: suit = "бубен"; break;
            case 4: suit = "червей"; break;
            default: suit = "неизвестной масти";
        }
        
        cout << card << " " << suit << endl << endl;
    }
    */

    // Упражнение 6: Название месяца через m месяцев после 01.1990
     /*
    {
        int m;
        cout << "6. Введите количество месяцев, прошедших с января 1990: ";
        cin >> m;
        
        string months[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
                          "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
        cout << "Текущий месяц: " << months[m % 12] << endl << endl;
    }
    */

    // Упражнение 7: Расписание врача
     /*
    {
        int day;
        cout << "7. Введите день недели (1-7): ";
        cin >> day;
        
        switch(day) {
            case 1: cout << "Понедельник: 9:00-12:00"; break;
            case 2: cout << "Вторник: 14:00-17:00"; break;
            case 3: cout << "Среда: 10:00-13:00"; break;
            case 4: cout << "Четверг: выходной"; break;
            case 5: cout << "Пятница: 8:00-11:00, 15:00-18:00"; break;
            case 6: cout << "Суббота: 9:00-12:00"; break;
            case 7: cout << "Воскресенье: выходной"; break;
            default: cout << "Неверный день недели";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 8: Оценка теста
     /*
    {
        int score;
        cout << "8. Введите баллы за тест (0-100): ";
        cin >> score;
        
        if (score >= 90 && score <= 100) {
            cout << "Отлично";
        } else if (score >= 70 && score <= 89) {
            cout << "Хорошо";
        } else if (score >= 50 && score <= 69) {
            cout << "Удовлетворительно";
        } else if (score >= 0 && score < 50) {
            cout << "Неудовлетворительно";
        } else {
            cout << "Неверное количество баллов";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 9: Арифметическая операция
     /*
    {
        double a, b;
        char op;
        cout << "9. Введите два числа и операцию (+, -, *, /): ";
        cin >> a >> b >> op;
        
        switch(op) {
            case '+': cout << a + b; break;
            case '-': cout << a - b; break;
            case '*': cout << a * b; break;
            case '/': 
                if (b != 0) {
                    cout << a / b;
                } else {
                    cout << "Деление на ноль";
                }
                break;
            default: cout << "Неверная операция";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 10: Животное по восточному календарю
     /*
    {
        int year;
        cout << "10. Введите год: ";
        cin >> year;
        
        string animals[] = {"Обезьяна", "Петух", "Собака", "Свинья", 
                           "Крыса", "Бык", "Тигр", "Кролик", 
                           "Дракон", "Змея", "Лошадь", "Овца"};
        cout << animals[year % 12] << endl << endl;
    }
    */

    // Упражнение 11: Возрастная категория мужчины
     /*
    {
        int age;
        cout << "11. Введите возраст мужчины: ";
        cin >> age;
        
        if (age < 1) {
            cout << "Младенец";
        } else if (age <= 11) {
            cout << "Ребенок";
        } else if (age <= 15) {
            cout << "Подросток";
        } else if (age <= 25) {
            cout << "Юноша";
        } else if (age <= 70) {
            cout << "Мужчина";
        } else {
            cout << "Пожилой человек";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 12: Имена по полу
     /*
    {
        char gender;
        cout << "12. Введите пол (м/ж): ";
        cin >> gender;
        
        if (gender == 'м') {
            cout << "Мужские имена: Иван, Александр, Сергей, Дмитрий";
        } else if (gender == 'ж') {
            cout << "Женские имена: Анна, Мария, Елена, Ольга";
        } else {
            cout << "Неверно указан пол";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 13: Максимальная скорость транспорта
     /*
    {
        char transport;
        cout << "13. Введите тип транспорта (а, в, м, с, п): ";
        cin >> transport;
        
        switch(tolower(transport)) {
            case 'а': cout << "Автомобиль: 200 км/ч"; break;
            case 'в': cout << "Велосипед: 40 км/ч"; break;
            case 'м': cout << "Мотоцикл: 300 км/ч"; break;
            case 'с': cout << "Самолет: 900 км/ч"; break;
            case 'п': cout << "Поезд: 350 км/ч"; break;
            default: cout << "Неизвестный транспорт";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 14: Программы телеканалов
     /*
    {
        int channel;
        cout << "14. Введите номер канала (1-5): ";
        cin >> channel;
        
        switch(channel) {
            case 1: cout << "Первый: Новости, Кино, Сериалы"; break;
            case 2: cout << "Россия 1: Новости, Спорт, Ток-шоу"; break;
            case 3: cout << "НТВ: Криминальные хроники, Документальные фильмы"; break;
            case 4: cout << "СТС: Комедии, Мультфильмы, Сериалы"; break;
            case 5: cout << "ТНТ: Реалити-шоу, Комедийные шоу"; break;
            default: cout << "Неизвестный канал";
        }
        cout << endl << endl;
    }
    */

    // Упражнение 15: Периметр и площадь фигуры
     /*
    {
        char figure;
        cout << "15. Выберите фигуру (к, п, т): ";
        cin >> figure;
        
        switch(tolower(figure)) {
            case 'к': {
                double r;
                cout << "Введите радиус круга: ";
                cin >> r;
                cout << "Периметр: " << 2 * M_PI * r << endl;
                cout << "Площадь: " << M_PI * r * r;
                break;
            }
            case 'п': {
                double a, b;
                cout << "Введите стороны прямоугольника: ";
                cin >> a >> b;
                cout << "Периметр: " << 2 * (a + b) << endl;
                cout << "Площадь: " << a * b;
                break;
            }
            case 'т': {
                double a, b, c;
                cout << "Введите стороны треугольника: ";
                cin >> a >> b >> c;
                double p = (a + b + c) / 2;
                cout << "Периметр: " << a + b + c << endl;
                cout << "Площадь: " << sqrt(p * (p - a) * (p - b) * (p - c));
                break;
            }
            default: cout << "Неизвестная фигура";
        }
        cout << endl << endl;
    }
    */

    return 0;
}