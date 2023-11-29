#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número natural de três algarismos:\n");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;

    int dobro = 2 * (centena * 100 + dezena * 10 + unidade);

    printf("O dobro do número: %d\n", dobro);

    return 0;
}
