#include <iostream>
using namespace std;
int main(){
int i=1;
double d=12.34;
char c='a';
void *p;
cout << i << " " << d << " " << c << endl;
p=&i;
(*(int *)p)++;
p=&d;
(*(double *)p) = (*(double *)p)*3;
p=&c;
(*(char *)p) = 'b' ;
cout << i << " " << d << " " << c;
}
