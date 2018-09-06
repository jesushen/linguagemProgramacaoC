#include<stdio.h>
#include<stdlib.h>
void main(){
 struct dados{
   char nome[2][128];
 };
 struct dados cadastro;

 printf("\nInforme o primeiro nome: ");
 scanf("%s", cadastro.nome[1]);
 printf("\nInforme o segundo nome: ");
 scanf("%s", cadastro.nome[2]);

 printf("\n O nome do primero aluno eh: %s",cadastro.nome[1]);

}
//fonte:https://www.clubedohardware.com.br/forums/topic/1166694-como-armazenar-v%C3%A1rios-nomes-em-c/
