#include <stdio.h>
 
int main() {
    int num, horas; //num = numero do funcionario, horas = horas trabalhadas
    double ph; //ph = valor recebido por hora
    scanf("%d",&num);
    scanf("%d",&horas);
    scanf("%lf",&ph);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", horas*ph);
    return 0;
}
