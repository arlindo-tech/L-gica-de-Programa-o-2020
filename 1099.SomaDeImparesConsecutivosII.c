#include <stdio.h>
 
int main() {
    int N,X,Y, auxiliar,j=0; // X e Y SÃO OS NÚMERO LIDOS e N a quantidade de leituras
    scanf("%d",&N);
    while(j<N){
        scanf("%d %d",&X,&Y);
        if(X<Y){
            auxiliar=X;
            X=Y;
            Y=auxiliar;
        }
        // X será sempre nosso maior número
        // números entre os X E Y= X-Y
        int total= (X-Y)-1; // o último número não conta= ENTRE
        int k=0, somaImpares=0;
        while(k<total){
            Y=Y+1;
            if(Y%2!=0){ // é impar
                somaImpares= somaImpares+ Y;
            }
            k++;
        }   
        printf("%d\n",somaImpares);
        j++;
    }
    return 0;
}
