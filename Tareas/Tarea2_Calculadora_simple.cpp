#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

cout<<fixed;
cout<<setprecision(3);
    double a;
    double b;
    char op;

    cin >> a;
    cin >> op;
    cin >> b;

    switch (op)
        {
    case '+':
        cout << a+b;
        break;
    case '-':
        cout <<a-b;
        break;
    case 'x':
        cout <<a*b;
        break;
    case '/':
        cout <<a/b;
        break;

        }
    return 0;
}
