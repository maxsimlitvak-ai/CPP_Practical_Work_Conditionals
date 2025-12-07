#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Введіть Ваш вік: ";
    cin >> age;

    if (age < 13) {
        cout << "Доступ заборонено." << endl;
    }
    else if (age <= 17) { // Від 13 до 17
        cout << "Доступ з батьківським контролем." << endl;
    }
    else { // Більше або дорівнює 18
        cout << "Повний доступ дозволено." << endl;
    }
    return 0;
}