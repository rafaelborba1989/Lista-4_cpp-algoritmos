/*11. Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos pares e impares.*/
#include <iostream>
using namespace std;
int main() {

int i, t = 5, acmP = 0, acmI = 0;
int v1[t];  

for(i=0; i<t; i++){
  v1[i] = i * 2;  
}

for(i=0; i<t; i++){
  cout<<"\n\nElemento do vector 1: " << v1[i];
}  

for(i=0; i<t; i++){
  if(v1[i]%2==0){
    acmP = acmP + v1[i];    
  }else{
    acmI = acmI + v1[i];
  }  
}
  
for(i=0; i<t; i++){
  cout<<"\n\nsoma dos elementos pares: " << acmP;
}

  for(i=0; i<t; i++){
    cout<<"\n\nsoma dos elementos ímpares: " << acmI;
  }
  
}
