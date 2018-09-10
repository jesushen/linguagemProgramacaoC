#include<stdio.h>
#include<stdlib.h>
#include<time.h>
unsigned randomicos(void);
void main(){
    int i;
    srand(time(NULL));
    for(i=0;i<10;i++){
        if(i%2==0){
            printf("\n");
        }
        printf("%3d |", randomicos());
    }
}
unsigned randomicos(void){
    int num;
    num = rand()%100;
    return num;
}







/*
Todos nós sabemos que os números, como os inteiros, podem assumir tanto valores negativos como positivos.
Porém, muitas vezes, valores negativos (ou positivos) podem ser inúteis, chegando até a atrapalhar em termos de computação.

Por exemplo, o tamanho de memória é sempre positivo, não existe um bloco de -2 bytes em sua máquina.
Então, para declarar que um número seja apenas positivo (incluindo o 0), usamos o modificador unsigned:
unsigned int teste;
*/
/*https://www.cprogressivo.net/2013/01/Modificadores-do-tipo-inteiro-int-em-C--short-long-signed-unsigned.html*/
