#include <string>
#include <iostream>
using namespace std;

int main()
{

    /*�����, ��������� ������ � ����, �������������� ����, �� ����������, ���� ������������ getline,
    �� �� ��������� ������ ��� ������ ������. ��������� - ����� ������ � ���������. ������ ��� ��� � �����.
    � ������ ��������, ������� ����� "������ � ��������", �� ������ ������ � ���� ��������, � � ���� ���? */

    //cout << "Enter your name: ";
    //string name;
    //getline(cin, name);

    //cout << "Enter your age: ";
    //string age;
    //getline(cin, age);

    //cout << name << " " << age << '\n';     // ��� ��� ������������ - " ", �� � ����� ����� ���.

    string quote = "Well planned - half done";

    cout << quote << endl;
    cout << quote.length() << endl;
    cout << quote[0] << endl;
    cout << quote.back() << endl;

    return 0;
}
