#include <stdio.h>
 
int main() {
    char O;
    scanf("%c",&O);
    int k=0;
    double soma, elemento;
    int i=0,j=0;
    char M[12][12];
    for(i=0;i<12;i++){ // preencheremos os valores com o que o usuário colocar
        for(j=0;j<12;j++){
            scanf("%lf",&elemento);
            M[i][j]= (char)elemento;
            if(j<i){ // essa é a condição que estará abaixo da matriz
               soma= soma + elemento;
           }
        }
    }
    if(O=='S'){    
        printf("%.1lf\n",soma);
    }else if(O=='M'){
        double media = soma/66.0; // são 66 elementos abaixo da diagonal
        printf("%.1lf\n",media);
    }
    return 0;
}
