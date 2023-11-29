#include <stdio.h>

int main() {
    float distancia, tempo, velocidade;

    printf("Digite a distância percorrida (em km) e o tempo gasto (em horas):\n");
    scanf("%f %f", &distancia, &tempo);

    velocidade = distancia / tempo;

    printf("Velocidade do veículo: %.2f km/h\n", velocidade);

    return 0;
}
