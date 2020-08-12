#include <stdio.h>
int matrizes3x3(int*); 
// como vai ser usada muitas vezes, criei uma função
int main() {
    int sudoku[9][9]; // declaração da matriz
    int n; // número de vezes que a matriz será preenchida
    scanf("%d",&n);
    int k=0;// k = instância
    int i,j,p; // usadas nos for loops
    int linhas=0,colunas=0, matrizes=0;
    int SimOuNao=0; // SimOuNão vai ser 0=sim e 1=não
    // usando o while para ler as n matrizes, conforme a entrada
    while(k!=n){
        k++; // para dar o valor corrento na instância
        linhas=0, colunas=0, matrizes=0,SimOuNao=0;
        // precisa só que estejam zeradas no início
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(i==8 && j==8){
                    scanf("%d",&sudoku[i][j]);
                }else{
                    scanf("%d ",&sudoku[i][j]);
                }
                if(sudoku[i][j]>9 || sudoku[i][j]<1){
                    SimOuNao=1; // os valores que o jogo pode ter são de 1 a 9
                }
            }
        }
// matriz pronta, vamos fazer a verificação se funcionou
// testando linha e coluna, se tem elementos iguais, se tiver não será solução
        for(p=0;p<9;p++){
            for(i=0;i<9;i++){
                for(j=0;j<9;j++){
                    if(i!=j){
                        if(sudoku[p][i]==sudoku[p][j]){
                            linhas=1;// ou seja, não é solução
                        }
                        if(sudoku[i][p]==sudoku[j][p]){
                        colunas=1; // ou seja não é solução
                        }
                    }
                 }
            }
        }
// por fim, só precisa testar as matrizes 3x3
        for(i=0;i<=6;i+=3){
            for(j=0;j<=6;j+=3){
                matrizes= matrizes3x3(&sudoku[i][j]);
            }
        }
// agora que as linhas e colunas foram testadas: verificar o SIM OU Não
        if(colunas==1 || linhas==1 || matrizes==1){
            SimOuNao=1; // não é uma solução válida
        }
        printf("Instancia %d\n",k);
        // agora que já está verificado, IMPRIMIR SIM OU NAO
        if(SimOuNao){
            printf("NAO\n");
        }else{
            printf("SIM\n");
        }
        // depois disso imprimir uma linha em branco 
        printf("\n");
    }
    return 0;
}

int matrizes3x3(int* matriz){
    int i,j, matrizes=0;
    // para comparar os elementos da matriz "sudoku" precisamos  de:
    // 1- uma lista que contenha esses elementos
    // 2- referenciar os elementos da matriz "sudoku" de maneira que eles sejam da matriz 3x3
    // vale lembrar que, segundo o Livro "C Completo Total" cap 4
    // a[j][k] é equivalente a: *(a+(j*comprimento das linhas)+k)
    // neste caso: a primeira linha só precisa somar: 0, 1 e 2
    // segundo linha: 9+0; 9+1; 9+2 (9 pois é a distância do primeiro elemento da primeira linha até o primeiro da segunda)
    // terceira linha: 18+0, 18+1, 18+2; (18 pois é a distância do 1º elemento da 1ª linha para o 1º elemento da 2ª linha)
    int teste[]={*matriz, *(matriz+1),*(matriz+2), // primeira linha
                    *(matriz+9),*(matriz+10), *(matriz+11), // segunda linha
                    *(matriz+18), *(matriz+19), *(matriz+20)}; // terceira linha
    // só falta testar se alguns desses elementos é repetido                
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i!=j && teste[i]== teste[j]){ 
                matrizes=1;
            }
        }
    }
    return matrizes;
}
