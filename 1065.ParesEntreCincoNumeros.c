#include <stdio.h>
 
int main() {
    int numbers[5],i=0,pares=0;
    for(i=0;i<5;i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0){
            pares=pares+1;
        }
    }
    printf("%d valores pares\n",pares);
    return 0;
}
