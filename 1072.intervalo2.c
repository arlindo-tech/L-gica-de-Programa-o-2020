#include <stdio.h>
 
int main() {
    int N;
    int i=0;
    int numeros[10000];
    int in=0, out=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&numeros[i]);
        if(numeros[i]>=10 && numeros[i]<=20){
            in = in+1;
        }else{
            out = out+1;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n",out);
    return 0;
}
