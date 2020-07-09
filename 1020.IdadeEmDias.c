#include <stdio.h>
 
int main() {
    int N; //N= idade em dias;
    scanf("%d",&N);
    int anos= N/365;
    int meses = (N%365)/30; /* é necessário fazer desse jeito
    pois o exercício considera um ano com 365, porém os meses
    só tem 30 dias. Logo você faz o numero de dias/365, 
    pega o resto dessa divisão e depois divide por 30 (cortando
    o que está após a vírgula) */
    int dias = (N%365)%30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);
    return 0;
}
