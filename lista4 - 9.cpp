/*9. Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P 
= [2 4].*/
#include <iostream>
using namespace std;
int main() {

int i, i2=0, t=6, cont = 0;
int vA[t];
  
for(i=0; i<t; i++){
  cout<<"\n\nDigite um valor inteiro: ";
  cin>>vA[i];
  if(vA[i]%2==0){
  cont++;
}
  }


int vP[cont]; 
  
 for(i=0; i<t; i++){
   if(vA[i]%2==0){
     vP[i2] = i;
     i2++;
     }
 } 

cout << "\n\nelementos em índices pares";  
for(i=0; i<cont; i++){
  cout << vP[i] << ", ";
  
}
  
  
}
