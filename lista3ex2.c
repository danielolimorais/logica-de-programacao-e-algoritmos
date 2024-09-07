#include <stdio.h>
int main(){
    float val;
    int opcao;
    printf("Qual foi o valor da compra?");
    scanf("%f", &val);
    printf("Escolha a opcao que deseja:\n 1-o total a pagar com 10 porcento de desconto\n2-valor de cada parcela no parcelamento 3x sem juros\n 3-a comissao do vendedor sobre a venda a vista\n 4- a comissao do vendedor sobre a venda parcelada");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("%f", val*0.90);
        break;
    case 2: 
        printf("%f", val/3);
        break;
    case 3: 
        printf("%f", (val*0.90)*0.05);
        break;
    case 4: 
        printf("%f", val*0.05);
        break;
    default:
        printf("Digite as opcoes de 1 a 4");
        break;
    }
    return 0;




}