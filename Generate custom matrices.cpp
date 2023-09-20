#include <iostream>
using namespace std;
int main(){
int A[10][10], B[10][10], C[10][10];
int n,m,i,j,v;
cout << "n="; cin >> n;
cout << "m="; cin >> m;
v=1;
for(i=0;i<n;i++)
for(j=0;j<n;j++){
A[i][j]=i+1;
B[i][j]=(i+j+1)%2;
C[i][j]=v++;
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)
cout << A[i][j] << " ";
cout << endl;
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)
cout << B[i][j] << " ";
cout << endl;
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)
cout << C[i][j] << " ";
cout << endl;
}
}
