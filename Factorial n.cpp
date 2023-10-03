#include <iostream>
using namespace std;
long fact(int);
int main(){
int n;
cin >> n;
cout << n << "!=" << fact(n);
}
long fact(int n){
if(n==0) return 1; //conditia de oprire
return n*fact(n-1); //apel recursiv: n!=n(n-1)!
}
