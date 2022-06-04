/*26. Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das
12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada.*/
#include <iostream>
using namespace std; 
int main(){

  int i, j, t1=3, t2 = 4, maiorN;
  int m[t1][t2];

  cout<<"\nEntre com a matriz M: ";  
  for(i=0; i<t1; i++){
    cout<<"\n";
    for(j=0; j<t2; j++){
      cout<<"\nDigite o termo " << i << "," << j <<": ";
      cin>>m[i][j];      
    }
  }

   cout<<"\n\nMatriz M: \n";  
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<m[i][j] << "\t";      
    }
    cout<<"\n";
  }
  
  for(i=0; i<t1; i++){
    maiorN = m[i][0];
    for(j=1; j<t2; j++){
      if(m[i][j] > maiorN){
        maiorN = m[i][j];
      }
    }
    for(j=0; j<t2; j++){
      m[i][j] = m[i][j] * maiorN; 
    }
  }  
   cout<<"\n\nMatriz M após multiplicação: \n";  
  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){
      cout<<m[i][j] << "\t";      
    }
    cout<<"\n";
  }
  
  
  }
