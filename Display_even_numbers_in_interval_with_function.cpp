#include <iostream>
using namespace std;
void display(int,int); // prototip
int main(){
int a, b;
cout<<"First interval number:";
cin>>a;
cout<<"Last interval number:";
cin>>b;
display(a,b);

}
void display(int a, int b){ // antet
int i;
for(i=a;i<=b;i++)
    if (i%2 == 0){
        cout << i<<" ";
    }
}
