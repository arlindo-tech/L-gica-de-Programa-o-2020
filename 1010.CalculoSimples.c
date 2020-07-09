#include <stdio.h>
 
int main() {
    int c1, n1; //c1 = codigo da peça 1 e n1=  números de peças 1 compradas
    double v1; // v1= valor unitario da peça 1
    int c2, n2; // mesmas definições, porém peça 2
    double v2;
    scanf("%d %d %lf",&c1,&n1,&v1);
    scanf("%d %d %lf",&c2,&n2,&v2);
    double total = (n1*v1)+(n2*v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
