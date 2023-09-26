#include <iostream>
using namespace std;
struct punct{
int x,y;
};
struct cerc{
punct P;
int r;
};
struct triunghi{
punct A,B,C;
};
struct dreptunghi{
punct A,B;
};
union figura{
cerc C;
triunghi T;
dreptunghi D;
};
int main(){
figura F;
F.C.P.x=10; F.C.P.y=10; F.C.r=5; // cerc
cout << "Cerc:" << F.C.P.x <<"," << F.C.P.y <<"," << F.C.r
<< endl;
F.D.A.x=1; F.D.A.y=2; // dreptunghi
F.D.B.x=15; F.D.B.y=20;
cout << "Dreptunghi: (" << F.D.A.x <<"," << F.D.A.y <<") ";
cout << " (" << F.D.B.x <<"," << F.D.B.y <<") ";
}
