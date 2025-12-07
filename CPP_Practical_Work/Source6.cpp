#include <iostream>
#include <iomanip> // Для форматирования вывода (2 знака после запятой)
using namespace std;

int main() {
    double price;
    int category;
    double discount_rate = 0.0; // Начальная ставка скидки 0%

    cout << "Введите начальную цену товара: ";
    cin >> price;

    cout << "Введите категорию покупателя (1-студент, 2-пенсионер, 3-обычный): ";
    cin >> category;

    // Используем if...else if...else для определения скидки
    if (category == 1) {
        discount_rate = 0.25; // 25% скидка для студентов
        cout << "Применена скидка: Студент (25%)" << endl;
    }
    else if (category == 2) {
        discount_rate = 0.30; // 30% скидка для пенсионеров
        cout << "Применена скидка: Пенсионер (30%)" << endl;
    }
    else if (category == 3) {
        discount_rate = 0.00; // 0% скидка для обычных покупателей
        cout << "Применена скидка: Обычный покупатель (0%)" << endl;
    }
    else {
        cout << "Ошибка: Неверно введена категория. Скидка не применена." << endl;
        // discount_rate остается 0.0
    }

    // Расчет финальной цены: Цена * (1 - Ставка скидки)
    double final_price = price * (1.0 - discount_rate);

    // Вывод с двумя знаками после запятой
    cout << fixed << setprecision(2);
    cout << "Финальная стоимость товара: " << final_price << " грн." << endl;

    return 0;
}