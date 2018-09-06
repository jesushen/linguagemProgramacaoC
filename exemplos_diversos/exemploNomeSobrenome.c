#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char nome[10];
    char sobreNome[10];

    printf("Informe o nome: ");
    scanf("%s", &nome);
    fflush(stdin);//Para limpar o buffer em Windows, use: fflush(stdin)
    printf("Informe o SobreNome: ");
    scanf("%s", &sobreNome);


    printf("Nome Completo: %s %s", nome, sobreNome);
}

/*https://www.cprogressivo.net/2012/12/Buffer--o-que-e-como-limpar-e-as-funcoes-fflush-e-fpurge.html*/
