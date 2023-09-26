#include <iostream>
using namespace std;
// definirea structurii cerute
struct persoana{
  char nume[20];
  char prenume[20];
  int varsta;
};
int main(){
  persoana P={"Ion","Ion",31};
  P.varsta++;
  cout << P.nume << " " << P.prenume << " " << P.varsta;
}
