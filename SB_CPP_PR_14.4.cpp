#include <string>
#include <iostream>
using namespace std;

int main()
{

    /*Артем, объясните почему в коде, представленном ниже, из видеоурока, если использовать getline,
    то не ставиться пробел при ВЫВОДЕ данных. Конкретно - между именем и возрастом. Делала все как в уроке.
    Я решила проблему, добавив вывод "пробел в кавычках", но вопрос почему у него работает, а у меня нет? */

    //cout << "Enter your name: ";
    //string name;
    //getline(cin, name);

    //cout << "Enter your age: ";
    //string age;
    //getline(cin, age);

    //cout << name << " " << age << '\n';     // Вот тут подставленно - " ", но в уроке этого нет.

    string quote = "Well planned - half done";

    cout << quote << endl;
    cout << quote.length() << endl;
    cout << quote[0] << endl;
    cout << quote.back() << endl;

    return 0;
}
