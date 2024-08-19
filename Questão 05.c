#include <stdio.h>

int main() {
    float custo_fabrica;
    const float DISTRIBUIDOR = 0.28;
    const float IMPOSTOS = 0.45;
    printf("Qual e o custo de fabrica do carro? R$ ");
    scanf("%f", &custo_fabrica);
    float valor_distribuidor = custo_fabrica * DISTRIBUIDOR;
    float valor_impostos = custo_fabrica * IMPOSTOS;
    float custo_total = custo_fabrica + valor_distribuidor + valor_impostos;
    printf("O custo final do carro e: R$ %.2f\n", custo_total);
    return 0;
}
