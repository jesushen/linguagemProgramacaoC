#include<stdio.h>
#include<string.h>
void main(){
    char str1[10] = "Curso de C";
    char str2[22] = "Curso de programação C";
    int res;
    res = strncmp(str1,str2,5);
    printf("\n O retorno: %d \n", res);
    system("pause");
}

