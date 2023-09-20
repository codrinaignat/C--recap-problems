#include <iostream>
using namespace std;
int main(){
int A[10][10]={ {1,2,3},
{4,5,6},
{7,8,9}};
int n=3,m=3,i,j;
for(j=0;j<n;j++){
for(i=0;i<n;i++)
cout<<A[i][j]<<" ";
cout << endl;
}
}
