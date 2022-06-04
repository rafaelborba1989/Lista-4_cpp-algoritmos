/*25. Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
mensagem dizendo quantas vezes cada elemento aparece em A*/
#include <iostream>
using namespace std;
int main() {
  bool flag = true;
  int i, i2, j2, j, t1=3, t2=3, cont=0, repet = 0, repetido;
  int mA[t1][t2];

  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<"\n\nDigite posição " << i << "," << j << ": ";
      cin>>mA[i][j];    
    }
  }
  
    cout<<"\n\nMatirz A: \n";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<"\n" << mA[i][j];
    }
  }

  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      repetido = 0;
      cont = 0;
      
      for(i2=0; i2<t1; i2++){
        for(j2=0; j2<t2; j2++){
          if(mA[i][j]==mA[i2][j2]){
            repetido = mA[i][j];
            cont++;
          }
        }
      }

      if(cont>1){
      cout<<"\n\nNúmero " << repetido << " se repete " << cont << " vezes!";
        }
      
    }
  }
  }
