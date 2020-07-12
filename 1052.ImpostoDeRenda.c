#include <stdio.h>
 
int main() {
    double salario;
    scanf("%lf",&salario);
    if(salario>0 && salario<=2000){
        printf("Isento\n");
    }else{
        double salarioSemIsento = salario - 2000;
        if(salario>2000 && salario<=3000){
            printf("R$ %.2lf\n",salarioSemIsento*0.08);
        }else if(salario>3000 && salario<=4500){
            double oitoporcento = 1000*0.08;
            double dezoitoporcento = (salario- 3000)*0.18;
            double total= oitoporcento+dezoitoporcento;
            printf("R$ %.2lf\n",total);
        }else if(salario>4500){
            double oitoporcento = 1000*0.08;
            double dezoitoporcento = 1500*0.18;
            double vinteeoitoporcento = (salario- 4500)*0.28;
            double total = oitoporcento+dezoitoporcento+vinteeoitoporcento;
            printf("R$ %.2lf\n",total);
        }

    }
    return 0;
}
