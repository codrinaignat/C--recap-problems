#include <iostream>
using namespace std;
long fibo(int);
int nr_apeluri; // retinem numarul de apeluri ale functiei
int main(){
int n;
cin >> n;
nr_apeluri=0;
cout << "fibo("<< n << ")=" << fibo(n) << endl;
cout << "Nr. apeluri:" << nr_apeluri;
}
long fibo(int n){
nr_apeluri++;
if(n<=2) return 1;
return fibo(n-1)+fibo(n-2);
}
