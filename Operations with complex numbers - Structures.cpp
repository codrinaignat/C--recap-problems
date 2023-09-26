#include <iostream>
#include <math.h>
using namespace std;
struct complex{
float re;
float im;
};
    complex suma(complex,complex);
    complex produs(complex,complex);
    float modul(complex);
int main(){
    complex z1={1,2},z2={5,-1},S,P; // z1= 1+2i si z2=5-i
    float m;
    S=suma(z1,z2);
    P=produs(z1,z2);
    m=modul(z1);
    cout << "S=" << S.re << "+i*" << S.im << endl;
    cout << "P=" << P.re << "+i*" << P.im << endl;
    cout << "m=" << m;
    }
    complex suma(complex x, complex y){
    complex T;
    T.re = x.re + y.re;
    T.im = x.im + y.im;
    return T;
    }
    complex produs(complex x, complex y){
    complex T;
    T.re = x.re*y.re - x.im*y.im;
    T.im = x.re*y.im + x.im*y.re;
    return T;
    }
    float modul(complex x){
    return sqrt(x.re*x.re + x.im*x.im);
}
