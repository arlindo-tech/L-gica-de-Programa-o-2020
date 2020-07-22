#include <stdio.h>
 
int main() {
    int i=0,N; // N=quantidade de vários testes
    scanf("%d",&N);
    int total=0,ratos=0,coelhos=0,sapos=0;
    for(i=0;i<N;i++){
        int quantia;
        char tipo;
        scanf("%d %c",&quantia,&tipo);
        if(tipo=='C'){
            coelhos = coelhos+ quantia;
        }else if(tipo=='R'){
            ratos=ratos+ quantia;
        }else if(tipo=='S'){
            sapos=sapos+quantia;
        }
    }
    total = coelhos+sapos+ratos;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    double percoelhos = (double)coelhos/total*100.0;
    // para imprimir % basta repeti-lo x2
    printf("Percentual de coelhos: %.2lf %%\n",percoelhos);
    double perratos = (double)ratos/total*100.00;
    printf("Percentual de ratos: %.2lf %%\n",perratos);
    double persapos = (double)sapos/total*100.00;
    printf("Percentual de sapos: %.2lf %%\n",persapos);
    return 0;
}
