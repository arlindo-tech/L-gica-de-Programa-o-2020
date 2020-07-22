#include <stdio.h>
 
int main() {
    int X,i=0;
    scanf("%d",&X);
    int num [6];
    int l=X;
    int k=X+1;
    if(X%2!=0){
        printf("%d\n",X);
        for(i=0;i<5;i++){
            l=l+2;
            num[i]=l;
            printf("%d\n",num[i]);
        }
    }else if(X%2==0){
        printf("%d\n",k);
          for(i=0;i<5;i++){
            k=k+2;
            num[i]=k;
            printf("%d\n",num[i]);
        }
    }
    return 0;
}
