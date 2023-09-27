#include <iostream>
using namespace std;
void ChristmasTree(int);
void Space(int);
void Stars(int);
int main(){
    ChristmasTree(4);
    ChristmasTree(5);
}
void Space(int n){
    int i;
    for(i=1;i<=n;i++) cout << " ";
}
void Stars(int n){
    int i;
    for(i=1;i<=n;i++) cout << "*";
}
void ChristmasTree(int n){
    int i;
    cout << endl;
    for(i=1;i<=n;i++){
    Space(n-i);
    Stars(2*i-1);
    cout << endl;
}
Space(n-1); cout << "|" ;
}
