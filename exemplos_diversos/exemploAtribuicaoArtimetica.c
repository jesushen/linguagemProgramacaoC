#include<stdio.h>
#include<stdlib.h>
void main(){
    int valor;
    printf("\n Digite um valor: ");
    scanf("%d", &valor);
    printf("\n O valor digitado %d \n", valor);
    printf(" Operacao [ valor+=valor ]: %d \n", (valor+=valor));
    system("cls"); //função para limpar a tela, contida na stdlib.h
    printf("\n Digite um valor: ");
    scanf("%d", &valor);
    printf(" Operacao [ valor-=valor ]: %d \n", (valor-=valor));
    printf("\n Digite um valor: ");
    scanf("%d", &valor);
    printf(" Operacao [ valor*=valor ]: %d \n", (valor*=valor));
    printf("\n Digite um valor: ");
    scanf("%d", &valor);
    printf(" Operacao [ valor/=valor ]: %d \n", (valor/=valor));
    printf("\n Digite um valor: ");
    scanf("%d", &valor);
    printf(" Operacao [ valor%%=valor ]: %d \n", (valor%=2));
    system("pause");

}
