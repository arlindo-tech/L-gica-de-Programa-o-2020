#include<stdio.h>
#include <string.h>
int main() {
    char risada[51];
    scanf("%s", risada);
    // para a risada estar entre as mais engraçadas: a sequencia das vogais são lidas iguais a ordem natural
    // primeiro, vamos criar uma matriz só de vogais
    char vogais[51];
    int i,k=0;
    for(i=0;i<strlen(risada);i++){
        if((risada[i]=='a')|| (risada[i]=='e') ||(risada[i]=='i') ||(risada[i]=='o') ||(risada[i]=='u')){
            vogais[k] = risada[i];
            k=k+1;
            }
        } 
    // feita a matriz, vamos conferir se as sequências são iguais
    vogais[k]='\0'; // ultimo elemento precisa ser '\0' para informar o fim da string
    int j = strlen(vogais);
    int SimOuNao;
    for(i=0;i<j;i++){
        if(vogais[i]==vogais[j-1]){ // tira 1 do j porque senão o primeiro a ser comparado seria o \0
            SimOuNao =1;
        }else{
            SimOuNao=0;
            break;
        }
        j=j-1; // o j precisa ir diminuindo, já que comparação é entre os primeiros elementos e os últimos
    }
    if(SimOuNao){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}
