//Programa que recebe um valor N e calcula a soma dos primeiros N pares, alem de exibir a soma desses pares

#include <stdio.h>

int main(){
	int n=0,aux=0,s=0,i=0;
	scanf("%d",&n);
	while(aux<=n){
		if(i%2==0){
			aux++;
			printf("\n Eh par: %d", i);
			s+=i;
		}
		i++;
	}
	printf("\n\n Soma dos pares no intervalo: %d",s);
}
