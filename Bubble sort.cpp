#include <iostream>
using namespace std;
int main(){
    int A[100];
    int n;
    cout<<"n = "; cin>>n; 
    for (int i = 0; i < n; i++){
        cin>>A[i];
    }

    for (int j = 1; j <= n-1; j++){
        for (int k = 0; k < n-1; k++){
            if(A[k] > A[k+1]){
                int t = A[k]; 
                A[k] = A[k+1];
                A[k+1] = t;
            }
        }
    }
    cout<<"The sorted array: ";

    for(int k = 0; k < n; k++){
        cout<<A[k]<<" ";
    }
}