//Resolução do problema: "carnaval" problema original disponivel em http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2012f2p1_carnaval

#include <iostream>
using namespace std;
int main(){
	int i,j,l,ma,me;
	float nota,t;
	float n[5];
	for(i=0;i<5;i++){
	  cin>>n[i];
	}
	for(j=0;j<5-1;j++){
	  me=j;
	  for(l=j+1;l<5;l++){
	    if(n[l]<n[me]){
	      me=l;
	    }
	  }
	  t=n[j];
	  n[j]=n[me];
	  n[me]=t;
	}
	nota=(n[1]+n[2]+n[3]);
	std::cout.precision(1);
  std::cout << std::fixed <<nota<<endl;
}