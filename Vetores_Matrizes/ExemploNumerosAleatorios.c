#include<stdio.h>
#include<time.h>
#include<locale.h>
void main(){
    int i;
    int qtd;
    int qtdPares=0;
    int qtdImpares=0;
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    printf("Informe quantos n�meros dejada sortear: ");
    scanf("%d", &qtd);
    int num[qtd];

    for(i=0;i<qtd; i++){
        num[i] = rand()%100;
    }

    printf("\nOs n�meros sorteados foram\n");
    for(i=0; i<qtd;i++){
              printf("%2d | ", num[i]);

    }
    printf("\n Somente os n�meros Pares: \n");
    for(i=0; i<qtd; i++){
        if(num[i] % 2 == 0){
            printf("%d |", num[i]);
            qtdPares++;
        }
    }
    printf("\n Somente os n�meros IMPares: \n");
    for(i=0; i<qtd; i++){
        if(num[i] % 2 == 1){
            printf("%d |", num[i]);
            qtdImpares++;
        }
    }

    printf("\n\n Total de Pares: %d | Total de Impares %d", qtdPares, qtdImpares);

}
