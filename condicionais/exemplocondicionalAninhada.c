#include<stdio.h>
#include<locale.h>
void main(){
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe a média: \n");
    scanf("%f", &media);
    if(media >=9){
        printf("Seu conceito é A");
    }
    else if((media<9) && (media>=7.5)){
        printf("Seu Conceito é B ");
    }
    else if((media<7.5) && (media<=6)){
        printf("Seu conceito é C");
    }
    else{
        printf("Seu conceito é D");
    }
}
