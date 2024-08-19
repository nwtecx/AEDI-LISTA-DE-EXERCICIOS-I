#include <stdio.h>

int main() {
    float peso_pescado, peso_excedente, valor_multa;
    printf("Peso do peixe: ");
    scanf("%f", &peso_pescado);

    if (peso_pescado > 50) {
        peso_excedente = peso_pescado - 50;
        valor_multa = peso_excedente * 4;
        printf("Excesso: %.2f kg\nMulta: R$ %.2f\n", peso_excedente, valor_multa);
    } else {
        printf("Peso dentro do limite.\n");
    }

    return 0;
}