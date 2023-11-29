#include <stdio.h>

int main() {
    float precoPassagem, imposto;
    int codigoCidade;

    printf("Digite o preço da passagem, o código da cidade:\n");
    scanf("%f %d", &precoPassagem, &codigoCidade);

    switch (codigoCidade) {
        case 1:
            imposto = 0.3;
            break;
        case 2:
            imposto = 0.5;
            break;
        case 3:
            imposto = 0.4;
            break;
        case 4:
        case 5:
            imposto = 0.2;
            break;
        default:
            printf("Código de cidade inválido.\n");
            return 1;  // Saída com erro
    }

    float precoTotal = precoPassagem + precoPassagem * imposto;
    
    printf("Preço total da passagem: %.2f\n", precoTotal);

    return 0;
}
