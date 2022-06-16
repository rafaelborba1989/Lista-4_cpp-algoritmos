/*18. Leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus elementos estão em:
Ordem crescente;
Ordem decrescente;
Ordem aleatória.*/
#include <iostream>
using namespace std;
int main() {

int i, t = 5, c=0, d=0;
int v1[t];

  for(i=0; i<t; i++){
    cout<<"\n\nDigite um valor inteiro: ";
    cin>>v1[i];    
  }

  for(i=0; i<t; i++){
    if((v1[i]<v1[i+1]) && (i<t-1)) {
      c++;
     }else{
      if((v1[i]>v1[i+1]) && (i<t-1)){
        d++;
      }
    }
  }
      if(c==(t-1)){
       cout<<"\n\nORDEM CRESCENTE!";
      }
      if(d==(t-1)){
       cout<<"\n\nORDEM DRESCENTE!";
      }
      if(d!=(t-1) && c!=(t-1)){
       cout<<"\n\nORDEM ALEATORIA!";
      }
  }
