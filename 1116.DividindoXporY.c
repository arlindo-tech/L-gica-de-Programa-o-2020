#include <stdio.h>
 
int main() {
    int N,i=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(y!=0){
            double divisao= (double)x/y;
            printf("%.1lf\n",divisao);
        }else{
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
