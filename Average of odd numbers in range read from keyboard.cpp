#include <iostream>
using namespace std;
int main(){
    //Average of odd numbers in range read from keyboard
    int a, b, sum = 0, counter = 0, avg;
    cout<<"Range of numbers starts with: a = "; cin>>a;
    cout<<"And ends with b = "; cin>>b;

    for (int i=a; i<=b; i++){
        if (i % 2 == 1){
            counter++; 
            sum = sum + i; 
        }
        
    }
    avg = float(sum)/ counter;
    cout<<"Average of odd numbers in the given range is: "<<avg<<endl;
}