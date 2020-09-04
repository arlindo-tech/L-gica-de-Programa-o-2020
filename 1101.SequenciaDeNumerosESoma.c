#include <stdio.h>
 
int main() {
    int M,N; // valores que serao lidos
    scanf("%d %d",&M,&N);
    while(M!=0 && N!=0 && M>0 && N>0){ // condições do ex
        int auxiliar; 
        if(M<N){
            auxiliar=M;
            M=N;
            N=auxiliar;
        }
        int k=0, soma=0;
        for(k=N;k<(M+1);k++){
            printf("%d ",k);
        }
        for(k=N;k<(M+1);k++){
            soma= soma + N; // já que N É O MENOR NÚMERO
            N++;
        }
        printf("Sum=%d\n",soma);
        scanf("%d %d",&M,&N);
    }
    return 0;
}
