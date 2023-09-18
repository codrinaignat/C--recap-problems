 #include <iostream>
using
 
namespace
 std;int main(){ int A[100],B[100],C[100],D[100],n; int i; cout << "n="; cin >>n; 
for
(i=0;i<n;i++) A[i]=i+1;  
for
(i=0;i<n;i++) B[i]= (i%2==0)? 0:i;  
for
(i=0;i<n;i++) C[i]=n-1-i;  
for
(i=0;i<n;i++) D[i]=i%2;  cout << "A:";
for
(i=0;i<n;i++) cout << A[i] << " ";  cout << "\nB:";
for
(i=0;i<n;i++) cout << B[i] << " ";  cout << "\nC:";
for
(i=0;i<n;i++) cout << C[i] << " ";  cout << "\nD:";
for
(i=0;i<n;i++) cout << D[i] << " "; }
