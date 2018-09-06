#include<stdio.h>
#include<locale.h>

void main(){
    int n1, n2, op, total;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o primeiro número: \n");
    scanf("%d", &n1);
    printf("Informe o primeiro número: \n");
    scanf("%d", &n2);
    printf("O selecione uma opção:\n 1-soma | 2-subtração | 3-multiplicação | 4-divisão |");
    scanf("%d", &op);
    switch(op){
    case 1:
        total = (n1+n2);
        printf("A soma dos números: %d", total);
        break;
    case 2:
        total = (n1-n2);
        printf("A subtração dos números: %d", total);
        break;
    case 3:
        total = (n1*n2);
        printf("A multiplicação dos números: %d", total);
        break;
    case 4:
        total = (n1/n2);
        printf("A divisão dos números: %d", total);
        break;
    default:
        printf("Opção inválida \n");
        main();
    }
}

