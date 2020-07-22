#include <stdio.h>
 
int main() {
    int numbers[10000],i=0,N;
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0 && numbers[i]!=0){
            if(numbers[i]>0){
                printf("EVEN POSITIVE\n");
            }else if(numbers[i]<0){
                printf("EVEN NEGATIVE\n");
            }
        }else if(numbers[i]%2!=0 && numbers[i]!=0){
            if(numbers[i]>0){
                printf("ODD POSITIVE\n");
             }else if(numbers[i]<0){
                 printf("ODD NEGATIVE\n");
            }
        }else{
            printf("NULL\n");
        }
        
    }
    return 0;
}
