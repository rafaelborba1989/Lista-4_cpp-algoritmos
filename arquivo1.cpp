/*4. Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos. */
#include <iostream>
using namespace std;
int main() {

int i, t=5, d, dmaior=0, ianterior, iposterior;
int v[t];  

cout<<"\nEntre com a matriz A: ";  
for(i=0; i<t; i++){
  cout<<"\nDigite o termo " << i << ": ";
  cin>>v[i];  
}

for(i=0; i<(t-1); i++){
  d = v[i] -v[i+1];
  if(d<0){
    d *= (-1);
  }
  if(d>dmaior){
    dmaior = d;
    ianterior = i;
    iposterior = (i+1);
  }
}

cout<<"\n\nA maior diferença está entre os índices " << ianterior << " e " << iposterior;
  cout<<"\nA maior diferença é: " << dmaior;
  }