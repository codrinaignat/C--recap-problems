#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    int min, max;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    if (a>b){
        min = b;
        max = a;
    }
    else{ 
        max = b;
        min = a;
    }

    if (c>max){
        max = c;
    }
    if (c<min){
        min = c;
    }

    cout<<"min = "<<min<<endl;
    cout<<"max = "<<max<<endl;

}