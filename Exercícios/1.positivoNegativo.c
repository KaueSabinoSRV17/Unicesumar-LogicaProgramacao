int main(int argc, char const *argv[])
{

    float n;
    
    printf("Digite um número: ");
    scanf("%f", &n);

    if (n < 0)
    {
        printf("O número digitado é negativo");
    }

    else
    {
        printf("O número digitado é positivo");
    }
        

    return 0;
}
