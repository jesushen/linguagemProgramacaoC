#include<stdio.h>

void main(){
    int i;

    for(i=0; i<=1000;i+=5){
        //não imprimiu os valores entre 200 e 800
        if(i> 200 && i<800)  continue;
        //quando o i chegar a 900 o laço para
        if(i == 900) break;
            printf("\n %d", i);


    }
}
