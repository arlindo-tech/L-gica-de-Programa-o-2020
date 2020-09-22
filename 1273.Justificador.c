#include <stdio.h>
#include <string.h>
int main() {
    int k=0,N; // N= números de casos testes
    scanf("%d",&N);
    while(1<=N && N<=50){
        char palavras [N][51];
        int i, maior=0; // veremos qual será a maior palavra
        for(i=0;i<N;i++){
            scanf("%s",palavras[i]);
            if(strlen(palavras[i])>maior){
                maior= strlen(palavras[i]);
            }
        }
        int j,espacos;
        // verificando e imprimindo a quantidade necessária de espaços para a saída ficar justificada corretamente
        for(i=0;i<N;i++){
            if(strlen(palavras[i])==maior){
                printf("%s\n",palavras[i]);
            }else if(strlen(palavras[i])<maior){
                espacos= maior-strlen(palavras[i]);
                for(j=0;j<espacos;j++){
                    printf(" ");
                }
                printf("%s\n",palavras[i]);
            }
        }
        scanf("%d",&N);
        // não deve ser impressa uma linha entre as entradas quando ela for a última, ou seja, quando N=0
        if(N!=0){
            printf("\n");
        }
    }
    return 0;
}
