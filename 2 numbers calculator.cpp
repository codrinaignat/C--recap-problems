#include <iostream>
using namespace std;
int main()
{

    int a, b;
    float Result;
    char op;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Insert operator (+, -, / or *): ";
    cin >> op;

    switch (op)
    {
    case '+':
        Result = a + b;
        break;
    case '-':
        Result = a - b;
        break;
    case '*':
        Result = a * b;
        break;
    case '/':
        if (b != 0)
        {
            Result = a / b;
        }
        else
        {
            cout << "b equals zero!!";
        }
        break;
    default:
        cout << "Unknown operator";
    }
    cout << a << op << b << "=" << Result<<endl;
}