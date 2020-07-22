#include <stdio.h>
 
int main() {
    int X,Y, num;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X>Y){
        num = Y + 1;
        for(num=num; num<X; num++){
            if(num%5==2 || num%5==3){
                printf("%d\n",num);
            }
        }
    }else{
        num = X + 1;
        for(num=num; num<Y; num++){
            if(num%5==2 || num%5==3){
                printf("%d\n",num);
            }
        }
    }
    return 0;
}
