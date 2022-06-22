int main()
{

    float n1;
    float n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("O primeiro número digitado foi maior");
    }

    else

        if (n1 < n2)
        {
            printf("O segundo número digitado foi maior");
        }

        else

            if (n1 == n2)
            {
                printf("Os números são iguais!");
            }
            
        
    

    return 0;
}
