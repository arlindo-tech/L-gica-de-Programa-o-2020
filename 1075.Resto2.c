#include <stdio.h>
 
int main() {
    int N;
    scanf("%d",&N);
    int i=0;
    for(i=0;i<10000;i++){
        int j=i+1;
        if(j%N==2){
            printf("%d\n",j);
        }
    }
    return 0;
}
