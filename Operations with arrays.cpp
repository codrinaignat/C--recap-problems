#include <iostream>
using namespace std;
void initializare(int [], int &);
void citire(int [], int &);
void afisare(int [], int);
long suma(int [], int);
int main(){
int a[100],n; // vectorul a de lungime efectiva n
int b[10],m;
initializare(a,n);
afisare(a,n);
citire(b,m);
cout << suma(b,m);
}
void citire(int a[], int &n){
int i;
cout << "\nn="; cin >> n;
for(i=0;i<n;i++) cin >> a[i];
}
void initializare(int a[], int &n){
int i;
cout << "\nn="; cin >> n;
for(i=0;i<n;i++) a[i]=rand()%100;
}
void afisare(int a[], int n){
int i;
cout << endl;
for(i=0;i<n;i++) cout << a[i] << " ";
}
long suma(int a[], int n){
int i,S;
for(S=i=0;i<n;i++) S+=a[i];
return S;
}