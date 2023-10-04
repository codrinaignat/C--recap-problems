#include <iostream>
using namespace std;
int main(){
int a=1,b=2; // declararea variabilelor intregi a si b
int &copie_a = a; // copie_a este un alias al lui a
int *p,*q; // declararea pointerilor la intregi p si q
cout << p << endl;// afisarea unui pointer liber!!!
p=&a; // p contine adresa lui a
*p=*p+10; // a=a+10
q=&b; // q contine adresa lui b
++(*q); // ++b;
cout << &p << " " << &q << endl;
cout << &a << " " << p << " " << &b << " " << q<< endl;
cout << a << " " << *p << " " << b << " " << *q;
}
