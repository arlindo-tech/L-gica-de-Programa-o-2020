#include <stdio.h>
 
int main() {
    int X; // X = distancia total percorrida em km 
    double Y; // Y= total de combustível gasto em L
    scanf("%d",&X);
    scanf("%lf",&Y);
    printf("%.3lf km/l\n",X/Y);
    return 0;
}
