/*24. Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz.
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz */
#include <iostream>
using namespace std;
int main() {
  int i, j , t1=5, t2=5, somaL4 =0, somaC2 =0, somaDp=0, cont=0, somaDs =0;
  int mM[5][5];

  cout<<"\n\nPreecha a matriz M:\n ";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<"\n\nDigite o termo " << i << "," << j << ": ";
      cin>>mM[i][j];
    }
  }
  cout<<"\n\nMatriz M:\n";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<"\n\ntermo " << i << "," << j << ": " << mM[i][j];
    }
  }
    
    for(i=0; i<t1; i++){
      for(j=0; j<t2; j++){
        if(i==3){
          somaL4 = somaL4 + mM[3][j];   //coferir!
        }
      }     
    }
    cout<<"\n\nSoma da linha 4: " << somaL4;

      
    for(i=0; i<t1; i++){
      somaC2 = somaC2 + mM[i][1];
    }     
    cout<<"\n\nSoma da coluna 2: " << somaC2;
    
    
    for(i=0; i<t1; i++){
      somaDp = somaDp + mM[i][cont];
      cont++;
    } 
    cout<<"\n\nSoma da diagonal principal: " << somaDp;
    

     
     for(i=0; i<t1; i++){
       somaDs = somaDs + mM[i][(t1 -1) -i];
     }
      cout<<"\n\nSoma da diagonal secundaria: " << somaDs;
  
}
