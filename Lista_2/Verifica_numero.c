#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite três números:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 + num3) {
        printf("O primeiro número é maior ou igual à soma dos dois outros.\n");
    } else {
        printf("O primeiro número não é maior ou igual à soma dos dois outros.\n");
    }

    return 0;
}
