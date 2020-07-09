#include <stdio.h>
 
int main() {
    int codigo, quantidade;
    scanf("%d %d",&codigo,&quantidade);
    double total;
    if (codigo ==1){
        total = quantidade* 4.00;
    }else if(codigo==2){
        total = quantidade * 4.50;
    }else if(codigo ==3){
        total= quantidade * 5.00;
    }else if(codigo == 4){
        total = quantidade* 2.00;
    }else if(codigo ==5){
        total = quantidade* 1.50;
    }
    printf("Total: R$ %.2lf", total);
    return 0;
}
