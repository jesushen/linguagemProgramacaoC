#include<stdio.h>
#include<string.h>

void main(){
    char nome[15] = "Maria da Silva";
    int tamanho;
    tamanho = strlen(nome);
    printf("O tamanho da string %s vale %d\n", nome, tamanho);
    system("pause");

}
