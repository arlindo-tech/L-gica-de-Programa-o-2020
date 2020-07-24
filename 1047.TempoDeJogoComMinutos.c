#include <stdio.h>
int main() {
    int inicio, minicio, fim, mfim;
    int horas, minutos;
    scanf("%d %d %d %d",&inicio,&minicio,&fim,&mfim);
    // calculando o total de horas
    horas = fim - inicio;
    if(horas<0){ // única exceção
        horas= 24 + fim - inicio;
    }
    if(inicio==fim && mfim<=minicio){
        horas= 24;
    }
    // calculando o total de min
    minutos= mfim- minicio;
    if(minutos<0){
        minutos= 60 + mfim - minicio;
        horas = horas - 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
    return 0;
}
