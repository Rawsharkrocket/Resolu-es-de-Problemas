// Resolução do problema "COFRE - Cofrinhos da Vó Vitória"(link para o problema: http://br.spoj.com/problems/COFRE/)


#include <iostream>
using namespace std;
int main(){
  int j,n,z,d,t,i;
  t=0;
  while(cin >> n, n!=0){
      d=0;
      t=t+1;
      cout<<"Teste "<<t<<endl;
      for(i=0;i<n;i++){
        cin>>j>>z;
        d+=j-z;
        cout<<d<<endl;
      } 
      cout<<endl;
  }
  
}
