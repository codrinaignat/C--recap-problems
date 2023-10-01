#include <iostream>
using namespace std;
void interschimbare(int& , int&);
int main(){
int a,b;
cout << "a="; cin >>a;
cout << "b="; cin >>b;
interschimbare(a,b);
cout << a << " " << b;
}
void interschimbare(int& a, int& b){
int t;
t=a;a=b;b=t;
}