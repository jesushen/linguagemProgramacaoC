#include<stdio.h>

float calculosMatematicos(int op, float n1, float n2){
    switch (op){
    case 1: return(n1+n2);  break;
    case 2: return(n1-n2);  break;
    case 3: return(n1*n2);  break;
    case 4: return(n1/n2);  break;
    default: return 0;
    }
}
void main(){
    float res;
    res = calculosMatematicos(2,3,4);
    printf("O resultado da escolha: %.2f", res);
}



