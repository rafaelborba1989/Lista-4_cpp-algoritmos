/*27. Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir:
os elementos da diagonal principal pelos elementos da diagonal secundária;
os elementos da linha 5 com os da coluna 10. 
Escreva a matriz modificada.*/
#include <iostream>
using namespace std;
int main() {
  int i, j, t1=10, t2=10, aux, cont;
  int m[t1][t2];
  cont =1;
  
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
     m[i][j] = cont++;
    }
  }

  cout<<"\n\nMatriz M: \n";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<m[i][j]<< "\t";
    }
    cout<<"\n";
  }

  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      if(i==j){
        aux = m[i][j];
        m[i][j] = m[i][t2-1-i];
        m[i][t2-1-i] = aux;
      }
    }
  }

  cout<<"\n\nMatriz M com diagonais invertidas : \n";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<m[i][j]<< "\t";
    }
    cout<<"\n";
  }

  for(i=0; i<t1; i++){
    aux = m[4][i];
    m[4][i] = m[i][9];
    m[i][9] = aux;      
  }

  cout<<"\n\nMatriz M com troca de 5 linha por coluna 10: \n";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<m[i][j]<< "\t";
    }
    cout<<"\n";
  }
  
}




  


  



