#include <stdio.h>
int fibonacci (int n);
int main() {
    int n;
    scanf("%d",&n); // leitura do número
    if(n>0 && n<46){
        int i;
        for(i=1;i<n+1;i++){
          int k;
          k= fibonacci(i); // chamada da função para todos os k's
          if(i==n){
            printf("%d",k);
          }else{
            printf("%d ",k);
          }
        } 
    }    
    printf("\n");
    return 0;
}
int fibonacci(int n){ // não é recursiva, teste por causa do timelimit
   int f0=0, f1=1, f2,i;
    for(i=0;i<n-1;i++){
        f2=f0+f1;
        f0=f1;
        f1=f2;
    }
    return f0;
}
