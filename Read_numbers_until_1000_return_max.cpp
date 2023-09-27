#include <iostream>
using namespace std;
int max();
int main(){
    cout << max();
}
int max(){
    int X,mx;
    cin >> X; mx=X;
        while(X<1000){
            if (X>mx) mx=X;
            cin >> X;
        }
    return mx;
}
