#include <stdio.h>
 
int main() {
    int N, i;
    double v1,v2,v3, media;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%lf %lf %lf",&v1,&v2,&v3);
        media = (v1*2)+(v2*3)+(v3*5);
        printf("%.1lf\n",media/10.0);
    }
    return 0;
}
