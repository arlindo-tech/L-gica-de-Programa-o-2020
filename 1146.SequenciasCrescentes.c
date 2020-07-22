#include <stdio.h>
 
int main() {
    int num, i;
    scanf("%d",&num);
    while(num!=0){
        for(i=1;i<num+1;i++){
            if(i<num){
                printf("%d ",i);
            }else{
                printf("%d\n",i);
            }
        }
        scanf("%d",&num);
    }
    return 0;
}
