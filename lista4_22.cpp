/*22. Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V*/
#include <iostream>
using namespace std; 
int main() {
  int i,i2=0, j, t1 = 3, t2 = 3, num;
  int mM[t1][t2], v1[t1*t2];

  cout<<"\n\nPreencha a matirz M: ";
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<"\n\nDigite o termo " << i << "," << j << ": ";
      cin>>mM[i][j];
    }
  }

  cout<<"\n\nDigite um valor inteiro que irá multiplicar a matriz M: ";
  cin>>num;

  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      v1[i2] = mM[i][j] * num;
      i2++;
    }
  }
    cout<<"\n\nVetor Resposta: ";
  for(i2=0; i2<(t1*t2); i2++){
    cout<<v1[i2] << "\n";
  }

}