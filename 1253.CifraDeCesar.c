#include <stdio.h>
#include <string.h> 
int main() { 
    /* o objetivo do programa é reverter a cifra de césar,
    que troca cada letra por duas posições a esquerda do alfabeto*/
    int N, k=0; // N=número de casos teste
    scanf("%d",&N);
    while(k!=N){
        char caracteres[51]; // A até Z maiúsculos = já com a cifra
        int deslocado; // vai medir o quanto deslocou para direita
        char decodificado[51];
        int size,i;
        scanf("%s",caracteres);
        scanf("%d",&deslocado);
        size = strlen(caracteres);
        for(i=0;i<size;i++){
            int teste = caracteres[i]-deslocado;
            if(teste>64){ // do A em diante
                decodificado[i]= caracteres[i]-deslocado;
            }else{
                decodificado[i]= caracteres[i]-deslocado+26;
                // para poder ficar dentro do alfabeto
            }
        }
        decodificado[size]='\0';
        printf("%s\n",decodificado);
        for(i=0;i<size;i++){
            decodificado[i]= '\0';
        }
        k++;
    }
    // SE FOR 64 TEM QUE SOMAR 26
    return 0;
}
