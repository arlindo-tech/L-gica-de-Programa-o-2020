#include <stdio.h>
 
int main() {
    double N1,N2,N3,N4;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    double media= ((N1*2.0)+(N2*3.0)+(N3*4.0)+(N4*1.0))/10.0;
    printf("Media: %.1lf\n",media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }else if(media<5.0){
        printf("Aluno reprovado.\n");
    }else if(media<7.0 && media>=5.0){
        printf("Aluno em exame.\n");
        double exame;
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        double nova = (media+exame)/2.0; //recalculando a media
        if(nova>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",nova);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",nova);
        }
    }
    return 0;
}
