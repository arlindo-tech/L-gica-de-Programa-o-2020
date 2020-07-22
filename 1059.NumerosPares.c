#include <stdio.h>
 
int main() {
    int numeros[100];
    int i =0;
    for(i=0;i<100;i++){
        numeros[i]=i+1;
        if(numeros[i]%2==0){
            printf("%d\n",numeros[i]);
        }
    }
    return 0;
}
