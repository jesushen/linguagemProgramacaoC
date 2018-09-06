#include<stdio.h>
#include<locale.h>

void main(){

    char letras[10];
    setlocale(LC_ALL, "portuguese");
    for(int i=0; i<10; i++){
        printf("Informe a %dª letra: \n", (i+1));
        scanf("%c", &letras[i]);
        fflush(stdin);
    }
    printf("\n Mostrando o vetor de letras\n");
    for(int i=0; i<10; i++){
        printf("Letra na posicao [%d]: %c \n", i, letras[i]);
    }

}
