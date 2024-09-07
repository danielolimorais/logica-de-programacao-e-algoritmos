#include<stdio.h>
int main(){
    char sexo;
    char nome[100];
    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu sexo: M/F");
    scanf("%c", &sexo);
    if(sexo == 'M' || sexo == 'm'){
        printf("Ilmo. Sr. %s", nome);
    }else if (sexo == 'F' || sexo == 'f') {
        printf("Ilma. Sra. %s", nome);
    } else {
        printf("Sexo inválido.\n");
    }


    
}