/*16. Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
alunos e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de todas as 
notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em seguida, 
escreva as matrículas dos alunos cujas notas foram menores do que a média.*/
#include <iostream>
using namespace std;
int main() {
  int i, t;
  float somatorio = 0, media;

  cout<<"\n\nDigite a quantidade de alunos da turma: ";
  cin>>t;
  
  int vN[t], vM[t];

  for(i=0; i<t; i++){
    cout<<"\n\nDigite a matricula do aluno: ";
    cin>>vM[i];
    cout<<"\n\nDigite o valor da nota do aluno: " << vM[i] << " : ";
    cin>>vN[i];
  }

  for(i=0; i<t; i++){
    somatorio = somatorio + vN[i];
  }

  media = (somatorio / t);
  cout<<"\n\nMédia da turma: " << media;

    cout<<"\n\nNotas acima da média:  ";
   for(i=0; i<t; i++){
    if(vN[i]>media){
     cout<<vN[i] << "\t";
    }
   }

    cout<<"\n\nMatriculas dos alunos com notas abaixo da média:  ";
   for(i=0; i<t; i++){
    if(vN[i]< media){
     cout<<vM[i] << "\t";
    }
   }
  

     
}

  
