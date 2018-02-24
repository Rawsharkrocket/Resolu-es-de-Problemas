//Resolução do problema: "Saldo do vovô" problema original disponivel em http://olimpiada.ic.unicamp.br/pratique/programacao/nivelj/2013f1pj_saldo

#include <iostream>
using namespace std;
int main(){
	int n,t,c,mn=0,x,s=0,a=0,at=0;
	cin>>n;
	cin>>c;
	t=c;
	s=c;
	for(int i=0;i<n;i++){
		cin>>x;
		t+=x;
		if(t<s){
			s=t;
		}
	}
	cout<<s<<endl;
}