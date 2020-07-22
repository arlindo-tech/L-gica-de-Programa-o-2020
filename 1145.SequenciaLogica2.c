#include <stdio.h>
 
int main() {
    int X,Y,num=1,j;
    scanf("%d %d",&X,&Y);
    for(num=1;num<=Y;num++){
        for(j=0;j<X;j++){
            printf("%d",num+j);
            if(j<X-1){
                printf(" ");
            }
        }
        printf("\n");
        num= num+X-1;
    }
    return 0;
}
