#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start = 0;
    do
    {
        start = get_int("Populacao inicial: ");
    }while(start<9);
    int final = 0;
    do
    {
        final = get_int("Populacao final: ");
    }while(final<start);
    int years = 0;
    while(start < final){
            start = start + (start*1/3) - (start * 1/4);
            years += 1;
        };

    printf("Anos: %d",years);
    printf("\n");
}
