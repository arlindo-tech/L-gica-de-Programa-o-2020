#include <stdio.h>
 
int main() {
    char nome[50];
    double sal, vendas; //sal = salario e venda = total de vendas em $
    scanf("%s", &nome);
    scanf("%lf",&sal);
    scanf("%lf",&vendas);
    double total = sal + (0.15*vendas); //total = salario com bonus
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
