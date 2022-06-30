/*12. Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados 
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.*/
#include <iostream>
using namespace std;
int main() {
  int i, t = 5, n;
  int v1[t];
  bool flag = false;
  for(i=0; i<t; i++){
    do{
      cout<<"\n\nDigite um valor inteiro: ";
      cin>>v1[i];    
    }while(v1[i]<0);

  }

  cout<<"\n\nDigite um valor inteiro qualquer: ";
  cin>>n;
  
  for(i=0; i<t; i++){
    if(n==v1[i]){  
      cout<<"\n\n Valor existe em V, na posição: " << i;
      flag = true;
    }
  }
     for(i=0; i<t; i++){
       if(flag==false){
        if(n!=v1[i]){
        cout<<"\n\n Número não localizado!";
          flag = true;
        }
       }
     }  
  }
  
