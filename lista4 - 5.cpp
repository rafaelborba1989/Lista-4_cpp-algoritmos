/*5-Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente. Ao final, escreva os vetores A e B.*/
#include <iostream>
using namespace std;
int main() {

int i, t=5;
int v1[t], v2[t];

for(i=0; i<t; i++){
  cout<<"\n\nDigite um valor inteiro: \n";
  cin>>v1[i];
}
  cout<<"\nA";
  for(i=0; i<t; i++){
    v2[i]= v1[(t-1)-i];  
    cout<<"\t\t"<<v1[i];
  }  
  cout<<"\nB";
  for(i=0; i<t; i++){
    cout<<"\t\t"<<v2[i];
  }
}
