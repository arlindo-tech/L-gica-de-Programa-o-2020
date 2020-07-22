#include <stdio.h>
 
int main() {
    int numbers[5],i=0;
    int pares=0,impares=0,positivos=0,negativos=0;
    for (i=0;i<5;i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0){
            pares=pares+1;
        }else if(numbers[i]%2!=0){
            impares=impares+1;
        }
        if(numbers[i]>0){
            positivos= positivos+1;
        }else if(numbers[i]<0){
            negativos=negativos+1;
        }
    }
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n",negativos);
    return 0;
}
