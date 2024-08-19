#include <stdio.h>
#include <math.h> 

int main() {
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    float dobro_num1 = 2 * num1;
    float produto_dobro = dobro_num1 * num1;
    float triplo_num1 = 3 * num1;
    float metade_num2 = num2 / 2;
    float soma_triplo_metade = triplo_num1 + metade_num2;
    float soma_numeros = num1 + num2;
    float raiz_quadrada = sqrt(soma_numeros);
    printf("Produto do dobro do primeiro numero: %.2f\n", produto_dobro);
    printf("Resultado da soma do triplo do primeiro numero com a metade do segundo numero: %.2f\n", soma_triplo_metade);
    printf("Resultado da Raiz quadrada da soma dos dois numeros: %.2f\n", raiz_quadrada);
    return 0;
}