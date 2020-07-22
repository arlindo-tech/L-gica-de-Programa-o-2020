#include <stdio.h>
 
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int soma=0,i=0;
    if(y>x){
        int l= x;
        while(l<=y){
            if(l%13!=0){
                soma = soma +l;
            }
            l= l+1;
        }
    }else{
        int l= y;
        while(l<=x){
            if(l%13!=0){
                soma = soma +l;
            }  
            l= l+1;
        }
    }
    printf("%d\n",soma);
    return 0;
}
