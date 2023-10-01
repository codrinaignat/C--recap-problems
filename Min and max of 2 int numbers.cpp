#include <iostream>
using namespace std;
struct alte_doua_numere{
int min,max;
};
alte_doua_numere sp(int,int);
int main(){
alte_doua_numere a;
a=sp(6,2);
cout << a.min << " " <<a.max;
}
alte_doua_numere sp(int a, int b){
alte_doua_numere T;
T.min=(a<b)?a:b;
T.max= (a+b)-T.min;
return T;
}