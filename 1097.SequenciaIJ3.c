#include <stdio.h>
 
int main() {
    int i=1,j=7;
    while(i<=9){
        int k=0;
        for(k=0;k<3;k++){
            printf("I=%d J=%d\n",i,j);
            j=j-1;
        }
        i=i+2;
        j=j+5;
    }
    return 0;
}
