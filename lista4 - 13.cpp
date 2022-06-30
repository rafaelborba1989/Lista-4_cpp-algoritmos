/*13. Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.Declare um vetor V com N elementos inteiros.Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro do anterior.Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.Mostre o vetor antes e depois da mudança.*/
#include <iostream>
using namespace std;
int main() {
  int i, n, x, menorv;
  bool flag = true, flag2 = true;

  cout<<"\n\nDigite o tamanho: ";
  cin>>n;
  
  int v1[n], v2[n];
  
  for(i=0; i<n; i++){
    if(flag){
    v1[i] = n;
      flag = false;
    }else{
      v1[i] = v1[i-1] * 2;
    }
    v2[i] = v1[i];
  }
  
   for(i=0; i<n; i++){
     cout<<"\n\nV1: " << v1[i];
   }  

   cout<<"\n\nVector antes da mudança: ";
    for(i=0; i<n; i++){
      cout << v2[i] << "\t";
    }
  
  cout<<"\n\nDigite um valor inteiro: ";
  cin>>x;

    for(i=0; i<n; i++){ 
      if(x==v1[i]){
        menorv = v1[0];
        v1[0] = x;
        x = menorv;
        v1[i]=menorv;
        cout<<"\n\nValor existe no vetor!";
        flag2 = false;
      }    
    }
  
    if(flag2 == true){
        if(x!=v1[i]){
          cout<<"\v\vValor não existe no vector!";
        }  
    }   
      
    if(!flag2){
       cout<<"\n\nVector depois da mudança: ";
        for(i=0; i<n; i++){
        cout << v1[i] << "\t";
        }
    }
  }
    
  
        
     
