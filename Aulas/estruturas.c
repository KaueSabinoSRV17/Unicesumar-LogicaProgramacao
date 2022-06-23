#include <stdlib.h>

struct produto
    {
        int id;
        char nome[10];
        int estoque;
        float custo;
        float preço;
    };
    

int main(int argc, char const *argv[])
{
    
    struct produto prod;

    prod.preço = 1.99;
    strcpy(prod.nome, "banana");
            

    return 0;
}
