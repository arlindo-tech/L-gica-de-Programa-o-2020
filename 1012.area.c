#include <stdio.h>
 
int main() {
    double A,B,C; //pontos
    scanf("%lf %lf %lf",&A,&B,&C);
    double triangulo= (A*C)/2.0;
    double circulo = 3.14159*C*C;
    double trapezio = (A+B)/2.0*C;
    double quadrado= B*B;
    double retangulo = A*B;
    printf("TRIANGULO: %.3lf\n",triangulo);
    printf("CIRCULO: %.3lf\n",circulo);
    printf("TRAPEZIO: %.3lf\n",trapezio);
    printf("QUADRADO: %.3lf\n",quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
    return 0;
}
