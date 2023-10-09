#include <iostream>
using namespace std;
int main(){
int i=123;
int *p; // pointer la int
int **q; // pointer la pinter la int
int ***t; // pointer la pointer la pointer la int :)
p=&i;
q=&p;
t=&q;
cout << i << " " <<***t;
}
