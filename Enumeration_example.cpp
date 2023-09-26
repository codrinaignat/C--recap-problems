#include <iostream>
using namespace std;
enum week {monday, tuesday, wednesday,
thursday, friday, saturday, sunday};
void Message(int);
int main(){
week S;
int i,ct;
for(i=monday; i<=sunday; i++)
Message(i);
}
void Message(int S){
if ((S>=monday)&&(S<=friday))
cout << "busy ";
else
cout << "free ";
}
