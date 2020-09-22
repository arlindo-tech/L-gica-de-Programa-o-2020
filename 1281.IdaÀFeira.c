#include <stdio.h>
#include <string.h>
int main() {
  int k=0,N; // N= quantidade de idas à feira
  scanf("%d",&N);
  while(k!=N){
      int i=0, M; // M= produtos disponiveis
      scanf("%d",&M);
      char produtos[M][51];  // a string tem no máximo 50 caracteres
      double preco[M];
      for(i=0;i<M;i++){
          scanf("%s %lf",produtos[i],&preco[i]);
      }
      int j, P; // P= quantidade de produtos que deseja comprar
      scanf("%d",&P);
      if(1<=P<=M){
        char prodcompra[P][51];
        int qtd[P];
        for(j=0;j<P;j++){
          scanf("%s %d",prodcompra[j],&qtd[j]);
        }
        int teste=0;
        double total=0.0;
        for(i=0;i<M;i++){
          for(j=0;j<P;j++){
              teste= strcmp(produtos[i],prodcompra[j]); // ver se as strings são iguais, ou seja, ver quais produtos ela irá comprar
              if(teste==0){
                  total= total + (preco[i]*qtd[j]); // valor que ela precisará levar à feira
              }
          }
        }
        printf("R$ %.2lf\n", total);
      }
      k++;
  }
  return 0;
}
 
 
