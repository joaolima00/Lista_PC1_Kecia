#include <stdio.h>

int main() {
    int raio;

    printf("Digite o raio da esfera:\n");
    scanf("%d", &raio);

    float volume = (4.0 / 3.0) * 3.14159 * raio * raio * raio;

    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
