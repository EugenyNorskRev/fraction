//сложение дробей
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, oper1, oper2;
    char dummychar = '/';
    cout << "Введите первую дробь: ";
    cin >> a >> dummychar >> b;
    cout << "Введите вторую дробь: ";
    cin >> c >> dummychar >> d;
    oper1 = (a * d) + (b * c);
    oper2 = b * d;
    cout << "Сумма дробей равна: " << oper1 << dummychar << oper2 << endl;

    return 0;
}
