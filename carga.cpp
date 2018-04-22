// Resolução do problema "TRANSP11 - Transporte" problema original disponivel em: http://br.spoj.com/problems/TRANSP11/

#include <iostream>
using namespace std;
int main(){
int a,b,c;
int nx,ny,nz;
cin>>a>>b>>c;
cin>>nx>>ny>>nz;
int d1;
int d2;
int d3;
d1=nx/a;
d2=ny/b;
d3=nz/c;
cout<<d1*d2*d3<<endl;
}