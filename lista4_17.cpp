/*17. Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no 
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada 
ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo 
todos os salários de S já reajustados.
*/
#include <iostream>
using namespace std;
int main() {
int i=0 , t = 100 , cod, reajuste;
float salario;
bool flag = true;  
int vS[t], vC[t];  

  for(i=0; i<t; i++){
    if(flag){
    cout<<"\n\nDigite o codigo do funcionario: ";
    cin>>vC[i];
      if(vC[i]==(-1)){
        flag = false;
      }
    }
     if(flag==true){ 
      cout<<"\n\nDigite o valor do salario do funcionario: " << vC[i] << " : ";
      cin>>vS[i];
     }
    if(flag == false){
      t = i;
    }
  }  

  cout<<"\n\nDigite o valor do reajuste: ";
  cin>>reajuste;
  
  cout<<"Valor reajustado: ";
  for(i =0; i<t; i++){
    cout<< "funcionario " << vC[i] << ": " << vS[i] + reajuste << "\n";
  }
  

}
