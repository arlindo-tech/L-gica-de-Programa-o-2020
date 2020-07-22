#include <stdio.h>
 
int main() {
    double numeros[6];
    int positivos=0,i=0;
    for(i=0;i<6;i++){
        scanf("%lf",&numeros[i]);
        if(numeros[i]>0){
            positivos = positivos+1;
        }
    }
    printf("%d valores positivos\n",positivos);
    return 0;
}
