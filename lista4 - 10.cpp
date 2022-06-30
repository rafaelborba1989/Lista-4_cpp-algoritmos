/*10. Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que:
a. Leia A e B. 
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e */
#include <iostream>
using namespace std;
int main() {

int i, t = 4;
int vA[t], vB[t], vC[t];
  
for(i=0; i<t; i++){
  cout<<"\n\nDigite um valor inteiro para o vetor A: ";
  cin>>vA[i];
}

cout << "\n";  
  
for(i=0; i<t; i++){
  cout<<"\n\nDigite um valor inteiro para o vetor B: ";
  cin>>vB[i]; 
}

for(i=0; i<t; i++){
  vC[i] = vA[i] + vB[i];
cout<<"\n\nResultado da soma dos valores de índice " << i << ": " << vC[i];
  
}  
  
  
}
