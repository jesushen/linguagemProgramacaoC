#include<stdio.h>
void main(){
    int cap, secao, sub;
    cap=1;
    while(cap <=2){
        printf("\n%d. Capitulo", cap);
        secao =1;
        while(secao <=3){
            printf("\n\t%d.%d Secao",cap,secao);
            sub=1;
            while(sub <= 3){
                printf("\n\t\t%d.%d.%d subSecao", cap,secao, sub);
                sub++;
            }
            secao++;
        }
        cap++;
    }
}
