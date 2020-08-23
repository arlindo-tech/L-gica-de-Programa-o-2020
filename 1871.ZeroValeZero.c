#include <stdio.h>
int contadorDeDigitos(int);
int main() {
    int N,M, i, digitos; // N e M são os números que serão lidos
    scanf("%d %d",&N,&M);
    int sum = M+N; 
    while(sum!=0){ // condição que o exercício estabelece
        // agora descobrimos quantos dígitos tem a soma
        digitos= contadorDeDigitos(sum);
        int k = digitos;
        // vamos armazená-los numa matriz
        char soma[digitos];
        while(digitos--){
            soma[digitos]=sum%10;
            sum/=10;
        }
        // agora os digitos dos números estão armazenados na matriz "soma"
        // vamos imprimir os números diferentes de zero
        int impressao=0;
        for(i=0;i<k;i++){
               if(soma[i]!=0){
                impressao= (impressao*10) +soma[i];
            }
        }
        printf("%d\n",impressao);
        scanf("%d %d",&N,&M);
        sum = M+N;
    }
    return 0;
}
int contadorDeDigitos(int sum){
  int digitos=1;
  while(sum/=10){
        digitos++;
    }
  return digitos;
}
