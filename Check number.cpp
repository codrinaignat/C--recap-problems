#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "a=";
    cin >> a;
    if (a == 0)
        cout << a << " este nul.";
    if (a < 0)
        cout << a << " este negativ.";
    if (a > 0)
        cout << a << " este pozitiv.";
}
