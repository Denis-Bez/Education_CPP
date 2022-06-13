#include <iostream>

using namespace std;

class User {
public:
    string name;
    int age;
    string adress;

    // Конструктор (функция инициализации)
    User(string _name, int _age, string _adress)
    {
        name = _name;
        age = _age;
        adress = _adress;
    }

    // Метод
    void Display() {
        cout << "Имя: " << name << " Возраст: " << age << " Адрес: " << adress
    }
};

int main() {
    
    // Создание объекта
    User _user("Tom", 19, "London");
    _user.Display();

    return 0;
}