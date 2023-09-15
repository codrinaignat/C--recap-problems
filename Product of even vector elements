#include <iostream>
using namespace std;

//read a n-length vector from the keyboard and calculate the sum of its elements
int main() {
    int vector[100];
    int n, i;
    int sum = 0; 
    int prod = 1;
    
    cout<<"The length of the vector is n = ";
    cin>>n;
    
    cout<<"Now insert the vector's elements: ";
    for (i = 0; i < n; i++){
        cin>>vector[i];
    }
    for (i = 0; i < n; i++){
        sum = sum + vector[i];
        if (vector[i]%2 == 0){
            prod = prod * vector[i];
        }
    }
    
    cout<<"The sum of the vector's elements is: "<<sum<<endl;
    cout<<"The product of the vector's even elements is: "<<prod<<endl;
    
}
