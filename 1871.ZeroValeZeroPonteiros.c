// agora em vez de usar a matriz diretamente, usei ponteiros, como pediu o professor
#include <stdio.h>
#include<stdlib.h>
int contadorDeDigitos(int);
int main() {
    int N,M, i, digitos; // N e M são os números que serão lidos
    scanf("%d %d",&N,&M);
    int sum = M+N; 
    char *soma; // declaração do ponteiro que guardará a soma
    while(sum!=0){ // condição que o exercício estabelece
        // agora descobrimos quantos dígitos tem a soma, chamando uma função que fará isto
        digitos= contadorDeDigitos(sum);
        int k = digitos; // como digitos será alterado em for while, precisamos que uma outra variável que não será utilizada guarde a quantidade de dígitos
        // vamos armazená-los usando ponteiro soma
        // primeiro precisamos ver o espaço necessário:
        soma = (char*)malloc(digitos*sizeof(char));
        while(digitos--){
            *(soma+digitos)=sum%10;
            sum/=10;
        }
        // agora os digitos dos números já estão armazenados 
        // vamos imprimir os números diferentes de zero
        int impressao=0;
        for(i=0;i<k;i++){
               if(*(soma+i)!=0){
                impressao= (impressao*10) + *(soma+i);
            }
        }
        printf("%d\n",impressao);
        scanf("%d %d",&N,&M);
        sum = M+N;
    }
    free (soma); // para todo malloc é necessário um free :)
    return 0;
}
int contadorDeDigitos(int sum){
  int digitos=1;
  while(sum/=10){
        digitos++;
    }
  return digitos;
}
