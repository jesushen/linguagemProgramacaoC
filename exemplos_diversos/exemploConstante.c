#include<stdio.h>
#include<stdlib.h>
void main(){
  const double pi = 3.14;
  //a formata��o %.2f garante que apenas sejam impressos dois valores ap�s o ponto.
  printf("\n valor de PI: %.2f", pi);

  printf("\nInforme um novo valor para PI:");
  scanf("%f", &pi);

  printf("\nO novo valor informado para PI foi: %.2f", pi);
}
