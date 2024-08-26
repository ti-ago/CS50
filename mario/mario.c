#include <stdio.h>
#include <cs50.h>

void blocks(int q);

int main (void)
{
    int h = get_int("Qual a altura da pirâmide ?\n");
    while(h<1 || h>8)
    {
        h = get_int("Valor inválido\n");
    }
    blocks(h);

}

void blocks(int q)
{
    for(int i = 1; i <= q; i++)
    {
        for(int k = q-i; k > 0; k--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf(" ");
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");

    }


}
