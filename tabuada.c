//Programa simples que calcula a tabuada dos numeros no intervalo entrado (tini demarca o inicio do intervalo e tfin marca o fianl do intervalo)

#include <stdio.h>

int main(void){
	int tini,tfin,i=0,j=0,p=0;
    scanf("%d",&tini);
	scanf("%d",&tfin);
	for(i=tini;i<=tfin;i++){
		for(j=1;j<=10;j++){
			p=i*j,
			printf(" \n\n o resultado de %d vezes %d e: %d",i,j,i*j);
		}
	}
}
