#include <stdio.h>
 
int main() {
    int i=0;
    double nume[6];
    int positivo=0; 
    double soma=0.0;
    for(i=0;i<6;i++){
        scanf("%lf",&nume[i]);
        if(nume[i]>0){
            positivo=positivo+1;
            soma = soma + nume[i];
        }
    }
    printf("%d valores positivos\n",positivo);
    printf("%.1lf\n", soma/positivo);
    return 0;
}
