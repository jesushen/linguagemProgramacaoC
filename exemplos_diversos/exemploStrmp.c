#include<stdio.h>
#include<string.h>
void main(){
    char str1[3] = "abc";
    char str2[3] = "abd";
    int resposta;
    resposta = strcmp(str1,str2);
    printf("\n saida do teste: %d \n", resposta);
    system("pause");
}

