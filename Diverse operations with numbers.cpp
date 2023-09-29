#include <iostream>
using namespace std;
int sumac(int); // suma cifrelor unui numar
int sumadiv(int); // suma divizorilor unui numar
int primac(int); // prima cifra a unui numar
int fact(int); // factorialul unui numar
int main(){
int a,b;
cout << "a="; cin >> a;
cout << "b="; cin >> b;
cout << "sumac(" << a << ")=" << sumac(a) << endl;
cout << "sumadiv(" << a << ")=" << sumadiv(a) << endl;
cout << "primac(" << a << ")=" << primac(a) << endl;
cout << "fact(" << b << ")=" << fact(b) << endl;
}
int sumOf(int n){
int S;
S=0;
for(;n>0;n/=10) S+=n%10;
return S;
}
int sumadiv(int n){
int d,S;
S=0;
for(d=1;d<=n;d++)
if (n%d==0) S=S+d;
return S;
}
int primac(int n){
while (n>=10) n=n/10;
return n;
}
int fact(int n){
int i,P;
P=1;
for(i=1;i<=n;i++) P*=i;
return P;
}