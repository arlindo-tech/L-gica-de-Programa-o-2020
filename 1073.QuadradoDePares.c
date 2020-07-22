#include <stdio.h>
 
int main() {
    int i=0,N;
    scanf("%d",&N);
    int nume[2000];
    for(i=0;i<N;i++){
        nume[i]= i+1;
        if(nume[i]%2==0){
            int l = nume[i];
            printf("%d^2 = %d\n",l, l*l);
        }
    }
    return 0;
}
