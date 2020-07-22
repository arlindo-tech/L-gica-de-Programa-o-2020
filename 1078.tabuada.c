#include <stdio.h>
 
int main() {
    int N,i=0;
    scanf("%d",&N);
    for(i=0;i<10;i++){
        printf("%d x %d = %d\n",(i+1), N, (i+1)*N);
    }
    return 0;
}
