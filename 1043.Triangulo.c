#include <stdio.h>
 
int main() {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if((A+B)>C && (A-B)<C && (A+C)>B && (A-C)<B && (C+B)>A && (C-B)<A){
        printf("Perimetro = %.1lf\n", A+B+C);
    }else{
        printf("Area = %.1lf\n", ((A+B)*C)/2.0);
    }
    return 0;
}
