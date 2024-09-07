#include <stdio.h>
int main(){
    int dias, val;
    val = 40,00;
    printf("Quantos dias voce trabalhou?");
    scanf("%d", &dias);
    printf("Voce devera receber: %f", (dias*val)*0.89);

}