#include <stdio.h>
 
int main() {
    int N=0, maior=0,i=0,posicao=0; // N serão os números lidos 
    while(i<100){
        scanf("%d",&N);
        if(N>maior){
            maior=N;
            posicao=i;
        }
        i++;
    }
    printf("%d\n",maior);
    printf("%d\n",posicao+1);
    return 0;
}
