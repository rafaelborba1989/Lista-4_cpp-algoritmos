/*8. Elabore um algoritmo que leia dois vetores, A (10 elementos inteiros) e B (12 elementos inteiros), e escreva 
todos os elementos comuns aos dois vetores.*/
#include <iostream>
using namespace std;
int main() {

  int i, i2, cont = 0, t = 4, t2 = 6;
  int v1[t], v2[t2];
  
  for(i=0; i<t; i++){
    cout<<"\n\nDigite um valor inteiro: ";
    cin>>v1[i];    
  }
  
  cout<<"\n\n";
  
  for(i2=0; i2<t2; i2++){
    cout<<"\n\nDigite um valor inteiro: ";
    cin>>v2[i2];  
  }
        
cout<<"\n\n";
  
  for(i=0; i<t; i++){
    for(i2=0; i2<t2; i2++){
      if(v1[i]==v2[i2]){
       cout<<"\n\n" << v1[i];
      }   
    }  
  } 
}
  
 
      
                        
      

 
