#include <iostream>
using namespace std;
void afisare(int a,int b,int pas=1);
int main(){
afisare(1,8,2);
afisare(1,8);// in acest caz ultimul parametru ca fi cel implicit
}
void afisare(int a,int b,int pas){
int i;
for(i=a;i<=b;i+=pas) cout << i << " ";
cout << endl;
}