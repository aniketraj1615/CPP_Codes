#include <iostream>
using namespace std;
float cal(float a, char symbol, float b)
{
    switch (symbol)
    {
    case ('+'):
        return a + b;
        break;
    case ('-'):
        return a - b;
        break;
    case ('*'):
        return a * b;
        break;
    case ('/'):
        return a / b;
        break;
    }
}
void enter_details()
{
    float x, y;
    char a;
    char symbol;
    cout << "enter first operand" << endl;
    cin >> x;
    cout << "enter operator" << endl;
    cin >> symbol;
    cout << "enter second operand" << endl;
    cin >> y;
    cout << cal(x, symbol, y) << endl;

    cout << "do you want to perfome more operations if yes enter y otherwise enter n " << endl;
    cin >> a;
    if (a == 'y')
    {
        enter_details();
    }
}
int main()
{
    enter_details();
    return 0;
}