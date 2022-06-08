/*19. Faça um programa que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e 
intercale os dois vetores A e B formando o vetor C (de 20 elementos).*/
#include <iostream>
using namespace std;
int main() {
  int ia,ib, ic, t=4, t2=t*2 ; 
  bool flag = true;
  int v1[t], v2[t], v3[t2];
  
  for(ia=0; ia<t; ia++){
    cout<<"\n\nDigite um valor inteiro para o vetor 1: ";
    cin>>v1[ia];
  }   
  for(ib=0; ib<t; ib++){
    cout<<"\n\nDigite um valor inteiro para o vetor 2: ";
    cin>>v2[ib];
  }  
  ia =0;
  ib = 0;
  for(ic=0; ic<t2; ic++){ 
     if(ic%2==0){        
        v3[ic] = v1[ia];      
         ia++;        
       }else{
        if(ic%2!=0){
         v3[ic] = v2[ib];
         ib++;   
       }
      }    
     } 
  cout<<"\n\nVetor C: ";
  for(ic=0; ic<t2; ic++){
    cout<<v3[ic] << "\t";
  }  
}
