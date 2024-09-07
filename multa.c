#include <stdio.h>

int main() {
    int v;
    char placa[8]; // Array para armazenar a placa do carro

    // Leitura da placa do carro
    printf("Digite a placa do carro (máx. 7 caracteres): ");
    scanf("%7s", placa); // Lê até 7 caracteres e adiciona o terminador nulo '\0'

    scanf("%d", &v);//le a velocidade do carro, informação dada pelo pardal

    // Condicional para verificar o valor de v0
    if (v > 80) {
        printf("Placa %s foi multada.\n", placa); // Exibe a placa e a mensagem de multa
    } else {
        printf("Placa %s estava dentro da lei.\n", placa); // Exibe a placa e a mensagem de conformidade
    }

    return 0;
}