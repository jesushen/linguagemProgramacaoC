#include <stdio.h>

void main(){
    int op;
    int n1, n2, total;
    printf("Informe a opcao desejada: ");
    printf("\n 1: Para soma\n 2: Para Dividir\n 3: Para Multiplicar\n 4: Para Subtrair\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &n2);
            total = (n1+n2);
            printf("A soma dos numeros %d, %d, eh: %d", n1,n2,total);
            break;
        case 2:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &n2);
            if(n2 == 0){
                printf("Não eh possivel dividir por zero\n Informe um novo numero maior que zero");
                scanf("%d", &n2);
            }
            total = (n1/n2);
            printf("A divisao entre os numeros %d, %d, eh: %d ", n1,n2,total);
            break;
        case 3:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &n2);
            total = (n1*n2);
            printf("A multiplicação dos numeros %d, %d, eh: %d", n1,n2,total);
            break;
        case 4:
            printf("Informe o primeiro numero: \n");
            scanf("%d", &n1);
            printf("Informe o segundo numero: \n");
            scanf("%d", &n2);
            total = (n1-n2);
            printf("A subtração dos numeros %d, %d, eh: %d", n1,n2,total);
            break;
        default:
            printf("Voce digitou um valor fora das opcoes (1 a 4)");
            main();
            break;
    }
}
