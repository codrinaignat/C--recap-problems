#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char S[100];
    int i;
    
    cout<<"Insert a string: ";
    cin.getline(S, 100);
    
    for(i = 0; S[i]; i++);
    
    cout<<"Length = "<<i<<"\n";
    cout<<"Length (strlen) = "<<strlen(S);
}
