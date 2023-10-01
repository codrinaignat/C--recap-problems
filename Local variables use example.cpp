#include <iostream>
using namespace std;
int main(){
int a=11,b=12;
{ int a=5;
cout << a << " " <<b << endl;
// a din bloc si b din blocul main
{ int b=100;
cout << a << " " << b << endl;
// a din blocul exterior si b din blocul interior
}
}
{ int b=6;
cout << a << " " << b << endl;
// b din bloc si a din blocul main
}
}