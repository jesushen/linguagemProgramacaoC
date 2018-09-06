#include<stdio.h>
void main(){
    int op = 0;

    while(op !=3){
        printf("Escolha uma opcao entre 1 e 3: \n");
        scanf("%d", &op);
        continue;
    }
    switch(op){
        case 1:
             printf("Opcao 1\n");
        break;
        case 2:
             printf("Opcao 2\n");
        break;
        case 3:
            printf("Opcao 3\n");
        break;
        case 4:
            printf("Fora do Intervalo.\n");
        break;
    }
}
