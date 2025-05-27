#include <iostream>
#include <string>

using namespace std;

class Session {  // Дополнительный класс "Сеанс"
private:
    string date;
    string time;
    string movieTitle;

public:
    // Методы для получения данных
    string getDate() { return date; }
    string getTime() { return time; }
    string getMovieTitle() { return movieTitle; }

    // Методы для установки данных (перегрузка методов)
    void setData() {
        cout << "Enter date (DD.MM.YYYY): ";
        getline(cin, date);
        cout << "Enter time (HH:MM): ";
        getline(cin, time);
        cout << "Enter movie title: ";
        getline(cin, movieTitle);
    }

    void setData(string d, string t, string mt) {
        date = d;
        time = t;
        movieTitle = mt;
    }
};

class Cinema {  // Основной класс "Кинотеатр"
private:
    string name;
    string address;
    Session sessions[10];  // Массив объектов класса Session
    int sessionCount = 0;  // Счетчик добавленных сеансов

public:
    // Методы для получения данных
    string getName() { return name; }
    string getAddress() { return address; }

    // Методы для установки данных
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }

    // Метод для добавления сеанса в массив
    void addSession(Session s) {
        if (sessionCount < 10) {
            sessions[sessionCount] = s;
            sessionCount++;
        } else {
            cout << "Maximum number of sessions reached!" << endl;
        }
    }

    // Метод для получения информации о сеансе по индексу
    Session getSession(int index) {
        if (index >= 0 && index < sessionCount) {
            return sessions[index];
        } else {
            cout << "Invalid session index!" << endl;
            return Session();  // Возвращаем пустой объект
        }
    }

    // Метод для получения количества сеансов
    int getSessionCount() { return sessionCount; }
};

int main() {
    Cinema cinema;  // Создаем объект кинотеатра
    string input;

    // Вводим данные о кинотеатре
    cout << "Enter cinema name: ";
    getline(cin, input);
    cinema.setName(input);

    cout << "Enter cinema address: ";
    getline(cin, input);
    cinema.setAddress(input);

    // Добавляем сеансы (5 с помощью первого метода и 5 с помощью второго)
    for (int i = 0; i < 5; i++) {
        cout << "\nAdding session " << i + 1 << " (interactive mode):" << endl;
        Session s;
        s.setData();  // Используем первый метод setData()
        cinema.addSession(s);
    }

    for (int i = 5; i < 10; i++) {
        cout << "\nAdding session " << i + 1 << " (direct mode):" << endl;
        Session s;
        s.setData("01.01.2023", "12:00", "Movie " + to_string(i + 1));  // Используем второй метод setData()
        cinema.addSession(s);
    }

    // Выводим информацию о кинотеатре и всех сеансах
    cout << "\n=== Cinema Information ===" << endl;
    cout << "Name: " << cinema.getName() << endl;
    cout << "Address: " << cinema.getAddress() << endl;
    cout << "\n=== Sessions ===" << endl;

    for (int i = 0; i < cinema.getSessionCount(); i++) {
        Session s = cinema.getSession(i);
        cout << "Session " << i + 1 << ":" << endl;
        cout << "  Movie: " << s.getMovieTitle() << endl;
        cout << "  Date: " << s.getDate() << endl;
        cout << "  Time: " << s.getTime() << endl;
        cout << endl;
    }

    return 0;
}