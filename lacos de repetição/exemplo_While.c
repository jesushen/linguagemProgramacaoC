#include<stdio.h>
void main(){
    int i=0;
    char ch;
    printf("Digite uma letra:\n");
    printf("Sera contado quantos letras digitar ate digitar S\n");
    printf("Quando desejar parar digite S ou s\n");
    while((ch != 's') && (ch !='S')){
       scanf("%c%*c", &ch);
        i++;
    }
    printf("Voce digitou: %d", (i-1));
}
