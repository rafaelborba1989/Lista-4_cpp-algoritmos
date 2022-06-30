/*3. Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicitados. */
#include <iostream>
using namespace std;
int main() {
  int i,ind, tam = 5;
  int v1[tam];
  
for(i=0; i<tam; i++){

  cout<<"\n\nDigite um valor inteiro: ";
  cin>>v1[i];
  
}  
do{
  cout<<"\n\nVocê deseja ver os elementos que estão em indices: (1-Pares) (2-Impares): ";
  cin>>ind;  
}while((ind!=1)&&(ind!=2));
if(ind==1){    
  for(i=0; i<tam; i++){
    if(v1[i]%2==0){
      for(i=0;i<tam;i=i+2){
        cout<<"\n\n"<<v1[i];
      }
    }
  }
}else{
  if(ind==2){
    for(i=0; i<tam; i++){
      if(v1[i]%2!=0){
        for(i=1;i<tam;i=i+2){
          cout<<"\n\n"<<v1[i];
        }
      }
    }
  }
}  
}
