// refazendo com ponteiros
#include <stdio.h>
#include <string.h> 
#include<stdlib.h>
int main() {
    int N; // quantidade de strings
    scanf("%d",&N);
    int k=0;
    char *str1, *str2; // strings que serão lidas
    str1=(char*)malloc(50*sizeof(char));
    str2=(char*)malloc(50*sizeof(char));
    int sizeStr; // tamanho das strings unidas
    while(k!=N){
        scanf("%s %s",str1, str2);
        sizeStr = strlen(str1) + strlen(str2);
        char *str;
        str=(char*)malloc(sizeStr*sizeof(char)+1);
        // vai ser a junção das strings
        // porém precisamos separar por casos do tamanho das strings
        int len1= strlen(str1), len2= strlen(str2);
        if(len1 > len2){ // len2 limita o for
         int i=0,j=0,x=0;
           for(i=0;i<2*len2;i++){
             if(i%2==0){// for par
                *(str+i)=*(str1+j);
                j=j+1;
             }else{ // for imoar
                *(str+i)=*(str2+x);
                x=x+1;
             }
           }
          int diferenca= (len1- len2);
           int parouStr = 2*len2;
           int parou1 = len2;
           for(i=0;i<diferenca;i++){
             *(str+parouStr)= *(str1+parou1);
             parouStr= parouStr+1;
             parou1 = parou1+1;
           }
            *(str+sizeStr)='\0';
        }else if(len2 >len1){ // len1 limita o for
          int i=0,j=0,x=0;
           for(i=0;i<2*len1;i++){
             if(i%2==0){// for par
                *(str+i)=*(str1+j);
                j=j+1;
             }else{ // for imoar
                *(str+i)=*(str2+x);
                x=x+1;
             }
           }
           int diferenca= (len2- len1);
           int parouStr = 2*len1;
           int parou2 = len1;
           for(i=0;i<diferenca;i++){
             *(str+parouStr)= *(str2+parou2);
             parouStr= parouStr+1;
             parou2 = parou2+1;
           }
           *(str+sizeStr)='\0';
        }else{// sao iguais 
          int i=0,j=0,x=0;
           for(i=0;i<sizeStr;i++){
             if(i%2==0){// for par
                *(str+i)=*(str1+j);
                j=j+1;
             }else{ // for imoar
                *(str+i)=*(str2+x);
                x=x+1;
             }
           }
           *(str+sizeStr)='\0';
        } 
        // após intercalar;
        printf("%s\n", str);
        // agora vamos zerar o ponteiro para que ela seja usada novamente
        int i=0;
        for(i=0;i<sizeStr;i++){
            *(str+i)= '\0';
        }
        k++;
    }
    return 0;
}
