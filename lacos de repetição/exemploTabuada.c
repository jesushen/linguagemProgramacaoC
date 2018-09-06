#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(){
    int num, j, i, su;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número Inteiro: ");
    scanf("%d", &num);
    su=num+1;
    printf("\n IMPRIMINDO A TABUADO DO %d E SEU SUCESSOR %d \n", num, su);
    for(i=0; i<=10; i++){
        printf("%d X %d = %d \t %d X %d = %d \n",num,i,(num*i),su,i,(su*i));
    }

    /*printf("\n IMPRIMINDO A TABUADA DO 0 A 10 \n");
    for(i=0; i<=10; i++){
        printf("==============");
        printf("\nTabuada do %d \n", i);
        printf("==============\n");
        for(j=1; j<=10; j++){
            printf("%.2d x %.2d = %.2d \n", i,j, (j*i));

        }
    }*/

}
