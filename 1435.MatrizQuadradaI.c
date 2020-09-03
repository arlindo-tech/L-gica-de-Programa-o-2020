#include <stdio.h>
 
int main() {
    int i,N; // N= ordem da matriz quadrada
    scanf("%d",&N); // leitura da ordem da matirz
    while(N!=0 && N<101){ // condições que o exercício estabelece
        char matriz[N][N]; //declaração matriz quadrada
        int i,j, numImpresso=1; // i e j serão usandos no for loop e numImpresso vai ser acrescido conforme vai adentrando as camadas internas 
        int x=0,y=0,z=N;
        while(z!=0){
          for(i=x;i<z;i++){ 
            for(j=x;j<z;j++){
              matriz[i][j]= numImpresso;
            }
          }
          z=z-1; // z tem o valor de N e vai sendo descrecido em uma unidada a cada while, ele controla quantas colunas e linhas serão preenchidas para ter uma camada inteira completa
          x=x+1; // x vai sendo acrescido em uma unidade a cada while, ele representa o número de camadas internas
          numImpresso=numImpresso+1; // outra camada interna e o número acrescido srá adicionado em um
        }
        // printando a matriz
        // o exercício pedia uma formatação em um campo de tamanho 3 justificados à direita e separados por espaço
        //porém último caractere de cada linha da matriz não deve haver espaços em branco
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j==0){
                    printf("%3d", matriz[i][j]);
                }else{
                    printf(" %3d", matriz[i][j]);
                }
            }
             printf("\n"); // início de uma nova linha
        }
        printf("\n"); // pular linha antes do início de uma outra matriz
        scanf("%d",&N);
    }
    return 0;
}
