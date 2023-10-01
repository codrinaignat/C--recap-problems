#include <iostream>
using namespace std;
void afisare(int [],int);
void intersectia(int [], int, int [], int, int [], int&);
void reuniunea(int [], int, int [], int, int [], int&);
void diferenta(int [], int, int [], int, int [], int&);
bool este(int [],int,int);// verifica daca o valoare este sau nu intr-o multime
int main(){
int a[]={2,4,8},n=3; // prima multime
int b[]={1,4,8,14},m=4; // a doua multime
int c[10],l;// multimea in care tine rezultatul operatiilor
intersectia(a,n,b,m,c,l); afisare(c,l);
reuniunea(a,n,b,m,c,l); afisare(c,l);
diferenta(a,n,b,m,c,l); afisare(c,l);
}
bool este(int a[],int n,int val){
int i;
for(i=0;i<n;i++)
if (a[i]==val) return true;
return false;
}
void intersectia(int a[], int n, int b[], int m, int c[], int&l){
int i;
l=0;
for(i=0;i<n;i++)
if (este(b,m,a[i])) c[l++]=a[i];
}
void reuniunea(int a[], int n, int b[], int m, int c[], int&l){
int i;
for(i=0;i<n;i++) c[i]=a[i]; // completam prima multime
l=n;
for(i=0;i<m;i++)
if (!este(a,n,b[i])) c[l++]=b[i];
}
void diferenta(int a[], int n, int b[], int m, int c[], int&l){
int i;
l=0;
for(i=0;i<n;i++)
if (!este(b,m,a[i])) c[l++]=a[i];
}
void afisare(int a[], int n){
cout << endl;
for(int i=0;i<n;i++) cout << a[i] << " ";
}