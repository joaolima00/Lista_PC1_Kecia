#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Digite os coeficientes A, B e C da equação do segundo grau:\n");
    scanf("%f %f %f", &a, &b, &c);

    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais diferentes: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        printf("Raízes reais iguais: %.2f\n", raiz);
    } else {
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-delta) / (2 * a);
        printf("Raízes imaginárias: %.2f + %.2fi e %.2f - %.2fi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
    }

    return 0;
}
