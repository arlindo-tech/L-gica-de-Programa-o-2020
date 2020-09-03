// refazendo o exercício com ponteiros
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
    char * risada;
    risada= (char*)malloc(51*(sizeof(char)));
    scanf("%s", risada);
    // para a risada estar entre as mais engraçadas: a sequencia das vogais são lidas iguais a ordem natural
    // primeiro, vamos criar um poteiro que irá armazenar só as vogais
    char *vogais;
    vogais=(char*)malloc(51*(sizeof(char)));
    int i,k=0;
    for(i=0;i<strlen(risada);i++){
        if((*(risada+i)=='a')|| (*(risada+i)=='e') ||(*(risada+i)=='i') ||(*(risada+i)=='o') ||(*(risada+i)=='u')){
            *(vogais+k) = *(risada+i);
            k=k+1;
            }
        } 
    // feito o armazenamente, vamos conferir se as sequências são iguais
    *(vogais+k)='\0'; // ultimo elemento precisa ser '\0' para informar o fim da string
    int j = strlen(vogais);
    int SimOuNao;
    for(i=0;i<j;i++){
        if(*(vogais+i)==*(vogais +(j-1))){
            SimOuNao =1;
        }else{
            SimOuNao=0;
            break;
        }
        j=j-1;
    }
    if(SimOuNao){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}
