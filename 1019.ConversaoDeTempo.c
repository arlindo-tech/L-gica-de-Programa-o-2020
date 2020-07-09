#include <stdio.h>
 
int main() {
    int N; //tempo em segundos
    scanf("%d",&N);
    int horas = N/3600;
    int minutos = (N/60) - 60*horas;
    int segundos = N - 3600*horas - 60*minutos;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
