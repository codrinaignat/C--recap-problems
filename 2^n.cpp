#include <iostream>
using namespace std;
long doila(int);
int main(){
int n;
cin >> n;
cout << "2^"<< n << "=" << doila(n);
}
long doila(int n){
if(n==0) return 1;
return 2*doila(n-1);
}
