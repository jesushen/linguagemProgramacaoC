#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>

void main(){
    int r, i;
    setlocale(LC_ALL, "Portuguese");
    /*Valor gerado pela hora do sistema
    srand est� utilizando o valor semente do time do computado
    ou seja o n�mero que � inicializado*/
    srand(time(NULL));
    for(i=0; i<10;i++){
        r = rand()%60;
         printf(" %d\n", r);
    }
    /*Parada do programa*/
    getch();
}
