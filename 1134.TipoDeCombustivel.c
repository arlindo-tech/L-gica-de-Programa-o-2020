#include <stdio.h>
 
int main() {
    int tipo,alcool=0,gasolina=0,diesel=0;
    scanf("%d",&tipo);
    while(tipo!=4 && tipo>0){
        if(tipo==1){
            alcool=alcool+1;
        }else if(tipo==2){
            gasolina=gasolina+1;
        }else if(tipo==3){
            diesel=diesel+1;
        }
        scanf("%d",&tipo);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);
    return 0;
}
