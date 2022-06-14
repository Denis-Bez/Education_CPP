#include <iostream>

using namespace std;

/* Также вариант (https://www.youtube.com/watch?v=rh9U1duQR8s&list=WL&index=29&t=13s)  с использованием приватного модификатора доступа
    и использованием функций get и set */
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
    
    // Деструктор автоматически вызывается, когда удаляется объект
    ~User() {
        cout << "Distructor called";
    }
    
    // Метод
/*     void Display() {
        cout << "Name: " << name << " Age: " << age << " Adress: " << adress;
    } */
};

int main() {
    
    setlocale(LC_ALL, "RU");

    // Создание объекта
/*     User _user("Tom", 19, "London");
    _user.Display(); */

    // Создаем динамический объект
    User *_user = new User("Tom", 19, "London");
    delete _user; // После удаления объекта будет вызван деструктор

    return 0;
}