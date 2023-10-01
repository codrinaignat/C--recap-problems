#include <iostream>
using namespace std;
bool prim(int);
int small_prime(int);
int main(){
int x;
cout << "x="; cin>>x;
cout << "Biggest prime number smaller than n read from keyboard " << x;
cout << " is " << small_prime(x);
}
bool prim(int n){
int d;
for(d=2;d<=n/2;d++)
if (n%d==0) return false;
return true;
}
int small_prime(int n){
while(!prim(n)) n--;
return n;
}