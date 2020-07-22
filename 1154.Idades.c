#include <stdio.h>
 
int main() {
    int N=0, soma=0, idade=0;
    double media;
    scanf("%d",&idade);
    while (idade>=0){
        soma = soma + idade;
        N = N +1;
        scanf("%d",&idade);
    }
    media = (double)soma/ (double)N;
    printf("%.2lf\n",media);
    return 0;
}
