//Resolução do problema: "campeonato" problema original disponivel em http://olimpiada.ic.unicamp.br/pratique/programacao/nivelj/2012f1pj_campeonato

#include <iostream>
using namespace std;
int main(){
		int cv,ce,cs,fv,fe,fs,pc,pf;
		cin>>cv>>ce>>cs>>fv>>fe>>fs;
		pc=((cv*3)+(ce*1));
		pf=((fv*3)+(fe*1));
		if(pc>pf){
			printf("C\n");	
		}
		if(pc==pf && cs>fs){
			printf("C\n");
		}
		if(pf>pc){
			printf("F\n");
		}
		if(pf==pc && fs>cs){
			printf("F\n");
		}
		if(pf==pc && fs==cs){
			printf("=\n");
		}
	return 0;
}