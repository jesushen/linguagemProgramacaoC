#include<stdio.h>
#include<string.h>

void main(){
    char str1[8] = "Curso C";
    char str2[5];
    printf("\n Variável curso: %s \n", str1);
    strncpy(str2,str1,5);
    str2[5] = '\0'; //zero atribui o tamanho exato na string
    printf("\n Resultado: %s \n", str2);
    system("pause");
}
