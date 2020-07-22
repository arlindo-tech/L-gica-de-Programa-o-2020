#include <stdio.h>
 
int main() {
    int i=0, N;
    scanf("%d",&N);
    int k=1;
    for(i=0;i<N;i++){
        printf("%d %d %d PUM\n",k,k+1,k+2);
        k=k+4;
    }
    return 0;
}
