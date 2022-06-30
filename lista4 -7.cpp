/*7. Elabore um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo 
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include <iostream>
using namespace std;
int main() {

  int i, t = 4;
  int v1[t], v2[t], v3[t] ;

    for(i=0; i<t; i++){
      cout<<"\n\nDigite um valor inteiro no vector 1: ";
      cin>>v1[i];
    } 
  
  cout<<"\n\n";
  
    for(i=0; i<t; i++){
      cout<<"\n\nDigite um valor inteiro no vector 2: ";
      cin>>v2[i];
    }  
  
    for(i=0; i<t; i++){
      cout<<"\n\nProduto dos operandos de índice " << i << " : " << v1[i] * v2[i];
    
    }  

      
      
}


  
