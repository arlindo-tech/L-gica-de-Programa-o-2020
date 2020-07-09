#include <stdio.h>
#include <math.h>
int main() {
    double N; 
    scanf("%lf", &N);
    int inteira = floor(N);
    double decimal = N - inteira;
    int centenas = inteira/100;
    int dezenas =(inteira%100)/10;
    int unidades = (inteira%10);
    int notasdecem = centenas;
    int notasdecinquenta = dezenas/5;
    int notasdevinte = (dezenas - 5*notasdecinquenta)/2;
    int notasdedez = dezenas - 5*notasdecinquenta - 2*notasdevinte;
    int notasdecinco = unidades/ 5;
    int notasdedois = (unidades - 5*notasdecinco)/2;
    int moedasdeum = unidades - 5*notasdecinco - 2*notasdedois;
    // parte decimal = num - ((int num));
    int moedas = (int)(decimal*100);
    int moedasdecinquenta = moedas/50;
    int moedasdevinteecinco = (moedas - moedasdecinquenta*50)/25;
    int moedasdedez= (moedas - moedasdecinquenta*50 - moedasdevinteecinco*25)/10;
    int moedasdecinco= (moedas - moedasdecinquenta*50 - moedasdevinteecinco*25 - moedasdedez*10)/5;
    int moedasdeumcent=(moedas - moedasdecinquenta*50 - moedasdevinteecinco*25 - moedasdedez*10 - moedasdecinco*5);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notasdecem);
    printf("%d nota(s) de R$ 50.00\n", notasdecinquenta);
    printf("%d nota(s) de R$ 20.00\n", notasdevinte);
    printf("%d nota(s) de R$ 10.00\n", notasdedez);
    printf("%d nota(s) de R$ 5.00\n", notasdecinco);
    printf("%d nota(s) de R$ 2.00\n", notasdedois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedasdeum);
    printf("%d moeda(s) de R$ 0.50\n", moedasdecinquenta);
    printf("%d moeda(s) de R$ 0.25\n", moedasdevinteecinco);
    printf("%d moeda(s) de R$ 0.10\n",moedasdedez);
    printf("%d moeda(s) de R$ 0.05\n",moedasdecinco);
    printf("%d moeda(s) de R$ 0.01\n",moedasdeumcent);
    return 0;
}
