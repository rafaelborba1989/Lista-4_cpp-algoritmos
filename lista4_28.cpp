/*28. Faça um algoritmo que gere e escreva automaticamente a seguinte matriz:
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1*/
#include <iostream>
using namespace std;
int main() {

  int i, j, t=6, cont2=1, cont3=1;
  int m[t][t];

  for(i=0; i<t; i++){
    for(j=0; j<t; j++){
      m[i][j]=1;
      if((i>0)||(i<5)){
       if((j>0)&&(j<5)){
         m[i][j]=2;
       } 
      }
      if((i==2)||(i==3)){
       if((j>1)&&(j<4)){
         m[i][j]=3;
       } 
      }
      
    }
  }
  cout<<"\n\nMatriz M \n";
  for(i=0; i<t; i++){
    for(j=0; j<t; j++){
      cout<<m[i][j] <<"\t";
    }
    cout<<"\n";
  }

  
}