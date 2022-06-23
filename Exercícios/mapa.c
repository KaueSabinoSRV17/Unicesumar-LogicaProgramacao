#include <stdio.h>

int main(void)
{

    int dividendo, divisor, resto, quociente;

    printf("Digite o Dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o Divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;

    resto = dividendo % divisor;

    printf("O resto é igual a %d\nO quociente é igual a %d", resto, quociente);

    return 0;
}
