#include <stdio.h>

void main(){

    int n1;
    printf("Informe o primeiro numero: \n");
    scanf("%d", &n1);

    if(n1 > 10){
      n1 -= 2;
      printf("O valor de n1 alterado e: %d", n1);
    }
    else if(n1 <=5){
      n1 *= 2;
      printf("O valor de n1 alterado e: %d", n1);
    }
    else if(n1 <=20){
      n1 /= 2;
      printf("O valor de n1 alterado e: %d", n1);
    }
    else{
      n1 += 2;
      printf("O valor de n1 alterado e: %d", n1);
    }
}
