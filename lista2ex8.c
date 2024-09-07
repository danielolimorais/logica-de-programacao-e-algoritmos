#include<stdio.h>
int main(){
    float altura, peso;
    char sexo;
    char nome[100];
    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu sexo: M/F");
    scanf("%c", &sexo);
    printf("Digite sua altura");
    scanf("%f", &altura);
    if(sexo=='M'|| sexo == 'm'){
        peso = (72.5 * altura) - 58;
        printf("Seu peso ideal e: %f", peso);
    }else if(sexo == 'F'|| sexo == 'f'){
        peso = (62.1 * altura) - 44.7; 
        printf("Seu peso ideal e: %f", peso);
    }

    
}