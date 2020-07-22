#include <stdio.h>
 
int main() {
    int X, i=0;
    int numbers[1000];
    scanf("%d",&X);
    for(i=0;i<X;i++){
        numbers[i]= i+1;
        if(numbers[i]%2!=0){
            printf("%d\n",numbers[i]);
        }
    }
    return 0;
}
