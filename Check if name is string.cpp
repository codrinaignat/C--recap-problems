#include <iostream>
#include <string.h>
using namespace std;
int main(){
char nume[10],S[100];
int rez,n1,n2;
cout << "Introduceti numele: "; cin.getline(nume,10);
cout << "Introduceti sirul: "; cin.getline(S,100);
if (strstr(S,nume))
cout << "\"" << nume << "\" apare in sirul \"" << S << "\"";
else
cout << "\"" <<nume<< "\" nu apare in sirul \"" << S << "\"";
}
