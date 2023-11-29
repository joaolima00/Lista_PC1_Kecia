#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número natural de três algarismos:\n");
    scanf("%d", &numero);

    int unidade = numero % 10;

    printf("Algarismo das unidades: %d\n", unidade);

    return 0;
}
