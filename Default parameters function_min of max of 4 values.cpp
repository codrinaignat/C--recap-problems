#include <iostream>
#include <values.h>

using namespace std;
int mx(int, int);
int max(int a=-MAXINT,int b=-MAXINT,int c=-MAXINT,int d=-MAXINT);
int main(){
cout << max(5,2) << endl;
cout << max(1,5,8,3) << endl;
}
int mx(int a,int b){
return (a>b)?a:b;
}
int max(int a, int b, int c, int d){
return mx(mx(a,b),mx(c,d));
}