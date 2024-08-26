#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    string text = get_string("Type your text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;
    float l;
    float s;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalnum(text[i]))
        {
            letters++;
        }
        else if (isblank(text[i]))
        {
            words++;
        }
        else if (ispunct(text[i]) && text[i] != ',')
        {
            sentences++;
        }
    }

    l = letters / (float) words * 100;
    s = sentences / (float) words * 100;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int grade = round(index);

    printf("Letters: %d; Words: %d; Sentences: %d.\n", letters, words, sentences);
    if (grade < 1)
    {
        printf("Before grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade: %d\n", grade);
    }
}
