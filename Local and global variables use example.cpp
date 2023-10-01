#include <iostream>
using namespace std;
int a=2; // variabila globala
void f(){
int a=5; // locala in f
cout << a << " " << ::a << endl;
}
int main(){
int b=100; // locala in main
f();
cout << a << " " << b << endl;
}