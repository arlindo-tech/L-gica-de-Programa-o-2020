#include <stdio.h>
 
int main() {
    int N; 
    scanf("%d", &N);
    int centenas = N/100;
    int dezenas =(N%100)/10;
    int unidades = (N%10);
    int notasdecem = centenas;
    int notasdecinquenta = dezenas/5;
    int notasdevinte = (dezenas - 5*notasdecinquenta)/2;
    int notasdedez = dezenas - 5*notasdecinquenta - 2*notasdevinte;
    int notasdecinco = unidades/ 5;
    int notasdedois = (unidades - 5*notasdecinco)/2;
    int notasdeum = unidades - 5*notasdecinco - 2*notasdedois;
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", notasdecem);
    printf("%d nota(s) de R$ 50,00\n", notasdecinquenta);
    printf("%d nota(s) de R$ 20,00\n", notasdevinte);
    printf("%d nota(s) de R$ 10,00\n", notasdedez);
    printf("%d nota(s) de R$ 5,00\n", notasdecinco);
    printf("%d nota(s) de R$ 2,00\n", notasdedois);
    printf("%d nota(s) de R$ 1,00\n", notasdeum);
    return 0;
}
