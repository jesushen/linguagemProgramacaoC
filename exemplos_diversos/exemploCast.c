#include<stdio.h>
#include<stdlib.h>
void main(){
    double num= 10, num2;
    char n[10] = "100";

    printf("\nValor de %.0f: %f", num, num);
    printf("\n Realizando um cast para float");
    num2 = atof(n);
    printf("\n\n Valor convertido: %f", num2);
    printf("\n\n A soma dos numeros: %f",(num+num2));

}
