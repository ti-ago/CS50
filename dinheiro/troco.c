#include <stdio.h>
#include <cs50.h>


int main(void){
    float valor;
    int cent25 = 0;
    int cent10 = 0;
    int cent5 = 0;
    int cent1 = 0;


    do
    {
        valor = get_float("Informe o valor do troco");
    }while(valor<=0);

    int roundValor = valor*100;

    while(roundValor>=25)
    {
        roundValor=roundValor-25;
        cent25++;
    }while(roundValor>=10)
    {
        roundValor=roundValor-10;
        cent10++;
    }while(roundValor>=5)
    {
        roundValor=roundValor-5;
        cent5++;
    }while(roundValor>=1)
    {
        roundValor=roundValor-1;
        cent1=cent1+1;
    }

    printf("[%d 25¢][%d 10¢] [%d 5¢] [%d 1¢]",cent25,cent10,cent5,cent1);
}


