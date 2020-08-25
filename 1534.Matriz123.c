#include <stdio.h>
void printando(char M, int i, int N);
int main() {
    int N; // N=ordem da matriz
    while(scanf("%d",&N)!=EOF){ // condição para não ser EOF
        // N é a ordem da matriz, mas os elementos são N*N
        int elementos = N*N;
        char M[elementos];
        int i=0;
        int meio= (elementos-1)/2;
        for(i=0;i<elementos;i++){ 
            // preenchendo os valores da matriz
            if(i%(N+1)==0 && i!=meio){ // diagonal principal
                M[i]=1;
            }else if(i!=0 && (((i%(N-1))==0))){ 
              // diagonal secundária
                M[i] =2;
            }else{
                M[i]=3;
            }
            printando(M[i],i, N);
        }
    }
    return 0;
}
void printando(char M, int i, int N){
    if(i!=0 && (((i+1)%N)==0)){ // ou seja é a última linha
      printf("%d\n", M);
    }else{
        printf("%d", M);
    }
}
