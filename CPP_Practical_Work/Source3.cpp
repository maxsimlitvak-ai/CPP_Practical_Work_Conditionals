#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Введіть кількість балів (0-100): ";
    cin >> score;

    if (score < 60) {
        cout << "Незадовільно" << endl;
    }
    else if (score <= 74) { // Від 60 до 74
        cout << "Задовільно" << endl;
    }
    else if (score <= 89) { // Від 75 до 89
        cout << "Добре" << endl;
    }
    else if (score <= 100) { // Від 90 до 100
        cout << "Відмінно" << endl;
    }
    else {
        cout << "Помилка: Невірний діапазон балів." << endl;
    }
    return 0;
}