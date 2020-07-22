#include <stdio.h>
 
int main() {
    int N;
    scanf("%d",&N);
    int i=0,j=0;
    for(i=0;i<N;i++){
        for(j=0;j<1;j++){
            int normal=i+1;
            int quad= normal*normal;
            int cubo= quad*normal;
            printf("%d %d %d\n",normal,quad,cubo);
            printf("%d %d %d\n",normal, quad+1,cubo+1);
        }
    }
    return 0;
}
