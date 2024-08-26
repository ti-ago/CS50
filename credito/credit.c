#include <cs50.h>
#include <stdio.h>

void credit(long num, string brand);

int main(void)
{

    long num = get_long("Card number: ");
    int amex = num / 10000000000000;
    int master = num / 100000000000000;
    int visa1 = num / 1000000000000000;
    int visa2 = num / 1000000000000;

    /*printf("%d",amex);
    printf("\n");
    printf("%d",master);
    printf("\n");
    printf("%d",visa1);
    printf("\n");
    printf("%d",visa2);
    printf("\n");
    */

    if (amex == 34 || amex == 37)
    {
        credit(num, "AMERICAN EXPRESS");
        printf("\n");
    }
    else if (master > 50 && master < 56)
    {
        credit(num, "MASTER CARD");
        printf("\n");
    }
    else if (visa1 == 4 || visa2 == 4)
    {
        credit(num, "VISA");
        printf("\n");
    }
    else
    {
        printf("INVALID");
        printf("\n");
    }
}

void credit(long num, string brand)
{
    long mod = num / 10;
    long sum = 0;

    for (long i = 10; i < num; i *= 100)
    {
        long lnum = mod % 10;
        mod /= 100;
        long mult = lnum * 2;
        sum += mult;
    }

    long mod2 = num;
    for (long i = 1; i < num; i *= 100)
    {
        long lnum = mod2 % 10;
        mod2 /= 100;
        sum += lnum;
    }
    printf("%s", brand);
}
