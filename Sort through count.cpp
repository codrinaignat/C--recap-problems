 #include <iostream>
using
 
namespace
 std;int main(){ int A[100],n,i,k,j;  int ct[100];  cout << "n="; cin >>n; 
for
(i=0;i<n;i++) A[i]=rand()%10;  cout << "Vectorul initial: "; 
for
(i=0;i<n;i++) cout << A[i] << " ";  
// contorizarea valorilor din vector
for
(i=0;i<10;i++) ct[i]=0;  
for
(i=0;i<n;i++) ct[A[i]]++; 
// completarea valorilor in vector 
 i=0; 
for
(k=0;k<10;k++)  
for
(j=1;j<=ct[k];j++) A[i++]=k; cout << "\nVectorul sortat: " ;  
for
(i=0;i<n;i++) cout << A[i] << " ";  }
