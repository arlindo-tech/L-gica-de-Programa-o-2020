#include <stdio.h>
 
int main() {
    double salario;
    scanf("%lf",&salario);
    if(salario<=400){
        double reajuste= 0.15*salario;
        double novosalario= salario+reajuste;
        printf("Novo salario: %.2lf\n",novosalario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 15 %\n");
    }else if(salario>400 && salario<=800){
        double reajuste= 0.12*salario;
        double novosalario= salario+reajuste;
        printf("Novo salario: %.2lf\n",novosalario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 12 %\n");
    }else if(salario>800 && salario<=1200){
        double reajuste= 0.10*salario;
        double novosalario= salario+reajuste;
        printf("Novo salario: %.2lf\n",novosalario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 10 %\n");
    }else if(salario>1200 && salario<=2000){
        double reajuste= 0.07*salario;
        double novosalario= salario+reajuste;
        printf("Novo salario: %.2lf\n",novosalario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 7 %\n");
    }else if(salario>2000){
        double reajuste= 0.04*salario;
        double novosalario= salario+reajuste;
        printf("Novo salario: %.2lf\n",novosalario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 4 %\n");
    }
    return 0;
}
