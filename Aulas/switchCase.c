int main()
{
    
    int op;
    float n1, n2, r;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("-- Calculadora em C --\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &op);
    
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    switch (op)
    {
    case 1:
        
        r = n1 + n2;
        printf("%f + %f = %f", n1, n2, r);

        break;

    case 2:

        r = n1 - n2;
        printf("%f - %f = %f", n1, n2, r);

        break;

    case 3:

        r = n1 * n2;
        printf("%f x %f = %f", n1, n2, r);

        break;

    case 4:

        r = n1 / n2;
        printf("%f / %f = %f", n1, n2, r);
    
    default:

        printf("Digite apenas o que está escrito na tabela!");

        break;
    }

    return 0;
}
