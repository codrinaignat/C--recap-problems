#include <iostream>
using namespace std;
void invers();
int main(){
invers();
}
void invers(){
char c;
c=getchar();
if (c!='\n') invers();
cout << c;
}
