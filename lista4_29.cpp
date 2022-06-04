/*29. Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde
se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de números e
encontre seu elemento minimax, mostrando também sua posição.*/
#include <iostream>
using namespace std;
int main() {

  int i, j, i2, j2, t=4, maiorN=0, menorN, linha=0, cont =1;
  int m[t][t];

  


  for(i=0; i<t; i++){   
    for(j=0; j<t; j++){
      m[i][j] = cont++;
      if(m[i][j] > maiorN){
        maiorN = m[i][j];
        linha = i;
        
      } 
    } 
  }
  cout<< "\n\nLinha " << linha;

  cout<<"\n\nMatriz M: \n";
  for(i=0; i<t; i++){
    for(j=0; j<t; j++){
      cout << m[i][j] << "\t";
    } 
    cout<<"\n";
  }

  
    for(i=0; i<t; i++){
      for(j=0; j<t; j++){
      menorN = m[linha][0];
        if(m[i==linha][j]){
          if(m[linha][j]<menorN){
            menorN = m[linha][j];
          } 
        }
      }
      }

   cout<<"\n\nTermo minimax:" << menorN;
 
  } 
      
     
  