#include<stdio.h>
#include<string.h>

void main(){
    char user[10];
    char senha[10];

    printf("Informe o usuário: \n");
    scanf("%s%%", &user);
    fflush(stdin);
    printf("Informe a senha:  \n");
    scanf("%s%%", &senha);
    fflush(stdin);
    validaLogin(user, senha);

}

void validaLogin(char user[10], char senha[10]){
    char userBd[10] = "admin";
    char senhaBd[10] = "admin";
    int rUser, rSenha;

    //printf("\nuserDb: %s   user: %s", userBd,user);
    //printf("\nSenhaDb: %s   : %s", senhaBd,senha);



    if((strcmp(user,userBd))== 0){
            if((strcmp(senha,senhaBd))== 0){
                printf("Dados Corretos");
            }
            else{
                printf("Senha Inválida!");
            }
    }
    else{
        printf("Dados Incorretos, Usuario Incorreto!");
    }
}
