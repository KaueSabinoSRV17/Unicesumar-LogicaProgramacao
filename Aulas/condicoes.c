int main()
{

    int n1;
    int n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

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
