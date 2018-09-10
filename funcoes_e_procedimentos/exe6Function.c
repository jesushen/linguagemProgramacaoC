#include<stdio.h>
#include<stdlib.h>
/*declaração dos protótipos das funções = assinaturas*/
float somaQuadrado(float, float);
float dobro(float);
float soma(float, float);


/*programa principal*/
void main(){
    float a, b, resposta;
    printf("Informe o primeiro numero: ");
    scanf("%f", &a);
    printf("Informe o segundo numero: ");
    scanf("%f", &b);

    resposta = somaQuadrado(a,b);
    printf("A soma dos quadrados de A e B eh: %.2f", resposta);
}


/*somaquadrado*/
float somaQuadrado(float n1, float n2){
    return s(dobro(n1), dobro(n2));
}
/*quadrado dos números*/
float dobro(float z){
    return z*z;
}
/*soma dos numeros*/
float s(float i, float j){
    return i+j;
}

