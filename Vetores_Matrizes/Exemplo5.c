#include<stdio.h>
#include<locale.h>
void main(){
    int num[3];
    setlocale(LC_ALL,"Portuguese");

    for(int i=0; i<3; i++){
        printf("Informe o %d� N�mero: ", (i+1));
        scanf("%d", &num[i]);
    }
    printf("\n Os valores digitados: \n");
    for(int i=0; i<3; i++){
        printf("O valor na posi��o [%d] �: %d\n", i, num[i]);
    }
}


