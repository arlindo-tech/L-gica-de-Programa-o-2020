#include <stdio.h>
 
int main() {
    int number[3];
    scanf("%d %d %d",&number[0],&number[1],&number[2]);
    int lidos[3]= {number[0],number[1],number[2]}; //serao printados depois
    int i=0,j=0;
    //inicio do processo de por em ordem crescente
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(number[i]>number[j]){
                int temp= number[i]; //variavel temporaria
                number[i]= number[j];
                number[j] = temp;
            }
        }
    }
    printf("%d\n",number[0]);
    printf("%d\n",number[1]);
    printf("%d\n",number[2]);
    printf("\n");
    printf("%d\n",lidos[0]);
    printf("%d\n",lidos[1]);
    printf("%d\n",lidos[2]);
    return 0;
}
