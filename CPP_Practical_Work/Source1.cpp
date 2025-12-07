#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Введіть температуру (°C): ";
    cin >> temp;

    if (temp <= 0) {
        cout << "Беремо теплий одяг та рукавички" << endl;
    }
    else if (temp <= 15) { // Від 1 до 15
        cout << "Візьміть легку куртку" << endl;
    }
    else if (temp <= 25) { // Від 16 до 25
        cout << "Можна одягати футболку" << endl;
    }
    else { // Більше 25
        cout << "Легкий одяг, сонцезахисні окуляри" << endl;
    }
    return 0;
}