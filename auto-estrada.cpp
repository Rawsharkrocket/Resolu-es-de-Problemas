//Resolução do problema: "Auto estrada" problema original disponivel em http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2008f2p1_auto

#include <iostream>
using namespace std;
int main(){
	int n,t=0;
	cin>>n;
	char x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x=='D'){
			t+=0;
		}
		else if(x=='C'){
			t+=2;
		}
		else if(x=='P'){
			t+=2;
		}
		else if(x=='A'){
			t+=1;
		}
	}
	cout<<t<<endl;
}