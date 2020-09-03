// refazendo com ponteiros
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
    int N; // número de testes
    scanf("%d",&N);
    int k=0;
    while(k!=N){
        char *numero;
        numero=(char*)malloc(1000*sizeof(char));
        scanf("%s", numero);
        int leds=0;// quantos leds serão necessários
        int i;
        int l= strlen(numero);
        for(i=0;i<l;i++){
            if(*(numero+i)=='1'){
                leds= leds+2; // numero 1 precisa de 2leds
            }else if(*(numero+i)=='2'|| *(numero+i)=='3' || *(numero+i)=='5'){
                leds= leds+5; // precisam de 5 leds
            }else if(*(numero+i)=='4'){
                leds= leds+4;
            }else if(*(numero+i)=='6' || *(numero+i)=='9'|| *(numero+i)=='0'){
                leds=leds+6;
            }else if(*(numero+i)=='7'){
                leds= leds+3;
            }else if(*(numero+i)=='8'){
                leds=leds+7;
            }
        }
        printf("%d leds\n", leds);
        leds=0;
        k++;
    }    
    return 0;
}
