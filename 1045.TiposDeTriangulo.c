#include <stdio.h>
 
int main() {
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double number[3]={A,B,C};
    int i=0, j=0;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(number[i]<number[j]){
                int temp= number[i]; //variavel temporaria
                number[i]= number[j];
                number[j] = temp;
            }
        }
    }
    A= number[0];
    B= number[1];
    C= number[2];
    if((A >(B+C)) || A==(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
         if((A*A)==((B*B)+(C*C))){
        printf("TRIANGULO RETANGULO\n");
    } 
    if((A*A)>((B*B)+(C*C))){
        printf("TRIANGULO OBTUSANGULO\n");
    } 
    if((A*A)<((B*B)+(C*C))){
        printf("TRIANGULO ACUTANGULO\n");    
    } 
    if(A==B && A==C && B==C){
        printf("TRIANGULO EQUILATERO\n");
    } 
    if((A==B && A!=C) || (A!=B && B==C) || (A==C && A!=B)){
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    
    return 0;
}
