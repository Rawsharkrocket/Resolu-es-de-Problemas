// Resolução do problema "GUERRA12 - Guerra por Território" problema disponivel em: http://br.spoj.com/problems/GUERRA12/
#include <iostream>
using namespace std;
int main(){
	int n,i,st,m;
	cin>>n;
	int v[n];
	int s[n];
	for(i=0;i<n;i++){
		cin>>v[i];
	}
	for(i=0;i<n;i++){
		if(i==0){
			s[i]=v[i];
		}
		else{
	    		s[i]=s[i-1]+v[i];
		}
	}
	for (i = 0; i < n; i++){
		st=0;
		st=s[n-1];
		m=i+1;
    		if (s[i]==st-s[i]){
      			cout<<m<<endl;
		}
	}
}
