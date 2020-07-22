#include <stdio.h>
 
int main() {
    double x,y;  //coordenadas do ponto que será analisado
    scanf("%lf %lf",&x,&y);
    if(y==0.0 || x==0.0){
        if(y!=0.0){
            printf("Eixo Y\n");
        }else if(x!=0.0){
            printf("Eixo X\n");
        }else{
            printf("Origem\n");
        }
    }else if(x>0.0){
        if(y>0.0){
            printf("Q1\n");
        }else{
            printf("Q4\n");
        }
    }else{
        if(y>0.0){
            printf("Q2\n");
        }else{
            printf("Q3\n");
        }
    }
    return 0;
}
