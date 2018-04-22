// Resolução do problema "F91"(link para o problema: http://br.spoj.com/problems/F91/)

#include <iostream>
using namespace std;
int f=0;
int n=1;
int f91(int n){
		if(n>=101){
			f=n-10;
			return f;
		}
		else{
			f= f91(f91(n+11));
			return f;
		}
	
}
int main(){
	while(scanf("%d", &n) && n!=0){
	  f91(n);
	  printf("f91(%d) = %d \n",n,f);
	}
}