//selection sort
#include <iostream>
using namespace std;
int main(){
    int A[100],n,i,j,t;
    cout << "n="; cin >>n;
    for(i=0;i<n;i++){
        cin >> A[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if (A[j]<A[i]){
                t=A[i]; A[i]=A[j]; A[j]=t;
            }
        }
    }
    cout << "Sorted vector: " ;
    for(i=0;i<n;i++) cout << A[i] << " ";
    
}
