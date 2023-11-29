#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Digite os lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    int perimetro = lado1 + lado2 + lado3;

    printf("Perímetro do triângulo: %d\n", perimetro);

    return 0;
}
