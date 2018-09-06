#include<stdio.h>
#include<stdlib.h>
void main(){
    char tecla;

    printf("\n Pressione uma tecla: ");
    tecla = getch();
    printf("\n Tecla digitada: %c",tecla);
    printf("\n O valor sucessor eh: %c", (tecla+1));
    printf("\n");
    system("PAUSE");
}
