#include <iostream>
using namespace std;
struct doua_numere{
float suma;
float produs;
};
doua_numere sp(float,float);
int main(){
doua_numere a;
a=sp(3,5);
cout << a.suma << " " <<a.produs;
}
doua_numere sp(float a, float b){
doua_numere T;
T.suma=a+b;
T.produs=a*b;
return T;
}