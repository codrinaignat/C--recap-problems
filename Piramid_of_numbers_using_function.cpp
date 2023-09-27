#include <iostream>
using namespace std;
void Spaces(int);
void Increasing(int);
void Decreasing(int);
void Piramid(int);
int main(){
    Piramid(7);
}
void Piramid(int n){
    int i;
    for(i=1;i<=n;i++){
        Spaces(n-i);
        Increasing(i);
        Decreasing(i-1);
        cout << endl;
    }
}
void Increasing(int n){
    int i;
    for(i=1;i<=n;i++) cout << i;
}
void Spaces(int n){
    int i;
    for(i=1;i<=n;i++) cout << " ";
}
void Decreasing(int n){
    int i;
    for(i=n;i>=1;i--) cout << i;
}
