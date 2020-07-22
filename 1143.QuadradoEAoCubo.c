#include <stdio.h>
 
int main() {
    int N, i=0, num[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        num[i]=i+1;
        int quad= num[i]*num[i];
        int cubo=num[i]*num[i]*num[i];
        printf("%d %d %d\n",num[i],quad,cubo);
    }
    return 0;
}
