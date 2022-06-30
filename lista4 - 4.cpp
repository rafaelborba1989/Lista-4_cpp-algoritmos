/*4. Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos. */
#include <iostream>
using namespace std;
int main() {

  int i, t=4, ianterior, iposterior, diferenca, mdiferenca=0;
  int v[t];

  for(i=0; i<t; i++){
    cout<<"\nDigite o termo " << i << ": ";
    cin>>v[i];
  }
  cout<<"\n";
  for(i=0; i<t; i++){
    cout<<v[i];
  }

  for(i=0; i<(t-1); i++){
    diferenca = v[i] - v[i+1];
    if(diferenca < 0){
      diferenca *= -1;
    }
    if(mdiferenca<diferenca){
      mdiferenca = diferenca;
      ianterior = i;
      iposterior = i+1;
    }
  }
  cout<<"\n\nA maior diferença esta entre os termos " << ianterior << " e " << iposterior;
  cout<<"\nA maior diferença eh: " << mdiferenca;
  
  
  }
