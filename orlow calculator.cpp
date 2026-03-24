#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Простейший калькулятор" << endl;
    cout << "Введите первый номер: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    cout << "Введите второй номер: ";
    cin >> num2;

    cout << "\nРезультат: ";

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        else {
            cout << "Ошибка: деление на ноль!";
        }
        break;
    default:
        cout << "Ошибка: неверная операция!";
    }

    cout << endl;
    return 0;
}