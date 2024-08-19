#include <stdio.h>

int main() {
    float tempo_horas, velocidade_kmh, distancia_km, litros_gasolina;
    const float KM_POR_LITRO = 12.0;
    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo_horas);
    printf("Informe a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidade_kmh);
    distancia_km = tempo_horas * velocidade_kmh;
    litros_gasolina = distancia_km / KM_POR_LITRO;
    printf("Quantidade de litros de gasolina utilizados: %.2f\n", litros_gasolina);
    return 0;
}

