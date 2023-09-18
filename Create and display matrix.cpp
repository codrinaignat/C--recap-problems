 #include <iostream>
using
 
namespace
 std;int main(){ int A[10][10],n,m,i,j;  cout << "n=";cin >>n; cout << "m=";cin >>m; 
for(i=0;i<n;i++) 
for(j=0;j<n;j++)
{ 
    cout << "A[" << i<< "][" << j << "]="; cin >> A[i][j]; } 
for(i=0;i<n;i++){ 
for(j=0;j<n;j++) 
    cout << A[i][j] << " "; cout << endl; }
 
}
