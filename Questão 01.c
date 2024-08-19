#include <stdio.h>

int main() {

    float lado;
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);
    float area = lado * lado;
    float dobro_area = 2 * area;
    printf("O resultado do dobro da area do quadrado e: %.2f\n", dobro_area);
    return 0;

}