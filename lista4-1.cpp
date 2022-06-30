/*1. Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor 
na ordem inversa (do último até o primeiro).*/

#include <iostream>
using namespace std;
int main() {
int tam,i,i2,cod;
  
cout<<"\n\nDigite tamanho: ";
cin>>tam;
  
int  v1[tam];

for(i=0; i<tam; i++){
  cout<<"\nDigite um valor: ";
  cin>>v1[i];
}
  
  cout<<"\n\nDigite codigo: (1-E/D)(2-D/E)";
  cin>>cod;

  if(cod==1){
    cout<<"\n\nDa esquerda para a direita: ";
    for(i=0;i<tam;i++){
      cout << v1[i];
    }
  }else{
    cout<<"\n\nDa direita para a esquerda: ";
    for(i=0;i<tam;i++){  
      cout << v1[(tam-1)-i];
    }
  }  
}
