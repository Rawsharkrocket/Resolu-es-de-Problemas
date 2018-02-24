//Resolução do problema: "JGANGO14" problema original disponivel em //http://br.spoj.com/problems/JGANGO14/

#include <iostream>
using namespace std;
int main(){
	int p1,c1,p2,c2;
	cin>>p1>>c1>>p2>>c2;
	if(p1*c1==p2*c2){
		cout<<0<<endl;
	}
	else if(p2*c2<p1*c1){
		cout<<-1<<endl;
	}
	else{
		cout<<1<<endl;
	}
}