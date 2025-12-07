#include <iostream>
using namespace std;

int main() {
    double balance = 5000.0; // Предположим, начальный баланс 5000 грн
    double amount;
    cout << "Ваш текущий баланс: " << balance << " грн" << endl;
    cout << "Введите сумму для снятия: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Ошибка. Сумма для снятия должна быть положительной." << endl;
    }
    else if (amount > balance) {
        cout << "Недостаточно средств на счете." << endl;
    }
    else {
        // Если обе условия выше ложны, операция успешна
        balance = balance - amount;
        cout << "Операция успешна. Снято " << amount << " грн." << endl;
        cout << "Остаток на счете: " << balance << " грн." << endl;
    }
    return 0;
}