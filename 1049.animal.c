#include <stdio.h>
#include <string.h> //necesária pois compararemos strings
 
int main() {
    char vert[30], classe[30], alimentacao[30];
    int retornoVet, retornoClasse, retornoAlimentacao;
    scanf("%s",vert);
    scanf("%s",classe);
    scanf("%s",alimentacao);
    char *v="vertebrado";
    char *c1="ave", *c2="mamifero",*c3="inseto",*c4="anelideo";
    char *a1="carnivoro", *a2="onivoro", *a3="herbivoro", *a4="hematofago";
    retornoVet = strncmp(vert,v,10);
    if(retornoVet){ // se tiver número não é vertebrado
        // é invertebrado, terá duas opções agora: inseto ou anelídeo
        retornoClasse = strncmp(classe,c3,6); 
        if(retornoClasse){// é anelídio
            retornoAlimentacao = strncmp(alimentacao,a2,7);
            if(retornoAlimentacao){// é hematofago
                printf("sanguessuga\n");
            }else{// é onivoro
                printf("minhoca\n");
            }
        }else{// é inseto
            retornoAlimentacao = strncmp(alimentacao,a3,9);
            if(retornoAlimentacao){//é hematófago
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }
    }else{ // é vertebrado
        retornoClasse = strncmp(classe,c1,3);
        if(retornoClasse){// é mamífero
            retornoAlimentacao= strncmp(alimentacao,a2,7);
            if(retornoAlimentacao){//herbivoro
                printf("vaca\n");
            }else{// é onivoro
                printf("homem\n");
            }
        }else{ // é ave
            retornoAlimentacao=strncmp(alimentacao,a2,7);
            if(retornoAlimentacao){//é carnivoro
                printf("aguia\n");
            }else{// é onivoro
                printf("pomba\n");
            }
        }
    }
    return 0;
}
