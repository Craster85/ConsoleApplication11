#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int pizzaID, drinkID, pizza, drink;
    float p_Price1, p_Price2, p_Price3,
        p_Price4, p_Price;
    float d_Price1, d_Price2, d_Price3,
        d_Price;
    float sumOrder;
    p_Price1 = 6.75;
    p_Price2 = 8.95;
    p_Price3 = 14.5;
    p_Price4 = 10.25;
    d_Price1 = 1.80;
    d_Price2 = 2.5;
    d_Price3 = 3.10;
    sumOrder = 0;
    cout << "Выберете пиццу:\n";
    cout << "1 — Сырная пицца $" << p_Price1 << endl <<
        "2 — Европа $" << p_Price2 << endl <<
        "3 — Пеперони $" << p_Price3 << endl <<
        "4 — \"Арбуз\" $" << p_Price4 << endl;
    cin >> pizzaID;
    cout << "Введите количество выбранной пиццы:\n";
    cin >> pizza;
    cout << "Выберите питьё:\n";
    cout << "1 — Пепса $" << d_Price1 << endl <<
        "2 — Кола $" << d_Price2 << endl <<
        "3 - Фанта $" << d_Price3 << endl;
    cin >> drinkID;
    cout << "Введите количество выбранного напитка:\n";
    cin >> drink;
    switch (pizzaID)
    {
    case 1:
        p_Price = p_Price1;
        break;
    case 2:
        p_Price = p_Price2;
        break;
    case 3:
        p_Price = p_Price3;
        break;
    case 4:
        p_Price = p_Price4;
        break;
    default:
        cout << "Простите, ID выбранной вами пиццы не существует\n";
        p_Price = 0;
        break;
    }
    switch (drinkID)
    {
    case 1:
        d_Price = d_Price1;
        break;
    case 2:
        d_Price = d_Price2;
        break;
    case 3:
        d_Price = d_Price3;
        break;
    default:
        cout << "Простите, ID выбранного вами напитка не существует\n";
        d_Price = 0;
        break;
    }
    if (pizza >= 5)
    {
        cout << "Вам очень повезло, так как каждая 5 пицца в подарок!\n";
        pizza = pizza - pizza / 5;
    }
    sumOrder = sumOrder + pizza * p_Price;
    if ((drink >= 3) && (d_Price > 2))
    {
        cout << "Для вас действует скидка 15% на напитки!\n";
        sumOrder = sumOrder + drink * (d_Price * (1 - 0.15));
    }
    else
    {
        sumOrder = sumOrder + drink * d_Price;
    }
    if (sumOrder > 50)
    {
        cout << "Для вас действует скидка 20% на весь заказ!\n";
        sumOrder = sumOrder * (1 - 0.2);
    }
    cout << "Ваш заказ:\n";
    cout << "Пицца " << pizzaID << " - " << pizza << " штуки " << p_Price << "$" << endl;
    cout << "Напитки " << drinkID << " - " << drink << " штуки " << d_Price << "$" << endl;
    cout << "Общая стоимость заказа: " << sumOrder << "$" << endl << "Приятного времяпрепровождения";

    return 0;
}