#include<stdio.h>
#include<locale.h>
void main(){
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe a m�dia: \n");
    scanf("%f", &media);
    if(media >=9){
        printf("Seu conceito � A");
    }
    else if((media<9) && (media>=7.5)){
        printf("Seu Conceito � B ");
    }
    else if((media<7.5) && (media<=6)){
        printf("Seu conceito � C");
    }
    else{
        printf("Seu conceito � D");
    }
}
