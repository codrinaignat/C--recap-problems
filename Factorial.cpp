#include <iostream>
using namespace std;
int main(){
    int a;
    int Prod = 1;

    cout<<"Insert number for factorial calculation(different than zero!!): "<<endl;
    cin>>a;

    for (int i = 1; i<=a; i++){
        Prod = Prod * i; 
    }
    
    cout<<"The factorial is: "<<Prod<<endl;

}