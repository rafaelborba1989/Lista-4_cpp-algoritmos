/*20. Escreva um programa que leia um vetor de 13 elementos inteiros, que é o gabarito de um teste da loteria 
esportiva, contendo os valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Leia, a seguir, para cada 
apostador, o número do seu cartão e um vetor de respostas de 13 posições. Verifique para cada apostador 
o números de acertos, comparando o vetor de gabarito com o vetor de respostas. Escreva o número do 
apostador e o número de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "ganhador". Finalizar 
inserindo um número de apostador negativo. */
#include <iostream>
using namespace std;
int main() {

  int i, t = 5, num, acerto;
  int v1[t], v2[t];

  cout<<"\n\nDigite gabarito: ";
 for(i=0; i<t; i++){
    cout<<"\n\nDigite " << i << " posição: ";
    cin>>v1[i];
  }

  do{
    acerto = 0;
    
        cout<<"\n\nDigite número do jogador: ";
        cin>> num;
   if(num>0){
         cout<<"\n\nDigite o seu jogo: ";
        for(i=0; i<t; i++){
          cout<<"\n\nDigite " << i << " posição: ";
          cin>>v2[i];
            if(v2[i] == v1[i]){
              acerto++;
              cout<<"\n\n" << acerto << " acerto!";
            }
        }
  
        if(acerto==5){
        cout<<"\n\nParabens jogador " << num << " vôce venceu!";
        }else{
          cout<<"\n\nBoa sorte na proxima!";
        }
      
    }else{
      cout<<"\n\nSistema encerrado!";
    }

    
  }while(num > 0);
  
}
