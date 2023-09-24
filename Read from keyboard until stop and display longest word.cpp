#include <iostream>
#include <string.h>
using namespace std;
int main(){
char S[100],Smax[100];
cin >> S;
strcpy(Smax,S);
while (strcmp("stop",S)){
if (strlen(S)>strlen(Smax)) strcpy(Smax,S);
cin >>S;
}
cout << "Cuvantul cel lung: " << Smax;
}
