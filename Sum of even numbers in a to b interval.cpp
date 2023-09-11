#include <iostream>
using namespace std;
int main(){
    int a, b;
    int Sum = 0;
    cout<<"a = "<<endl;
    cin>>a;
    cout<<"b = "<<endl;
    cin>>b; 
    if (a<b){
        for (int i = a; i <= b; i++){
            if (i % 2 == 0){
                Sum = Sum + i;
            }
        }
        cout<<"Sum of even numbers in a to be interval is: " << Sum<<endl;
    }
    else {
        cout<<"a must be a smaller nr than b";
    }
}