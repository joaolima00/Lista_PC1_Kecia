#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número natural de três algarismos:\n");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;

    printf("Centena: %d, Dezena: %d, Unidade: %d\n", centena, dezena, unidade);

    return 0;
}
