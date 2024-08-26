#include <stdio.h>
#include <cs50.h>

void miau(int n);

int main (void)
{
    string name = get_string("Whats your name ?\n");
    printf("Hello,%s \n",name);
    miau(4);
}

void miau(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("MIAU\n");
    }
}
