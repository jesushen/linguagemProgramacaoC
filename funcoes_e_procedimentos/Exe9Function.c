#include<stdio.h>
#include<stdlib.h>

int f1(void);//quanddo � declarado o void na prototipa��o n�o h� retorno
int f2(void);

int n2=45;

void main(){
    int n1=2;
    printf("\n%d", n1);
    f1();
    f2();
}

int f1(){
   int n2 = 3;
    printf("\n%d", n2);
}

int f2(){
    printf("\n%d", n2);
}
