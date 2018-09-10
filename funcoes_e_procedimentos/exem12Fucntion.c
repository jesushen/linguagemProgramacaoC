#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int i, j;
    register int m, n;
    float t, tr;

    t=clock();
    for(i=0;i<5000;i++){
        for(j=0;j<5000;j++){
            t= clock()-t;
        }
    }
    printf("\n tempo de execução dos laços sem register %.1f", t);

    tr=clock();
    for(n=0;n<5000;n++){
        for(m=0;n<5000;n++){
            tr= clock()-tr;
        }
    }
    printf("\n Tempo de execução dos laços com register %.1f", tr-t);

}
