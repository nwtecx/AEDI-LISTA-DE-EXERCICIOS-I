#include <stdio.h>

int main() {
    float celsius;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("O resultado da temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);
    return 0;
}

