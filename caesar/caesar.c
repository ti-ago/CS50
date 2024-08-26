#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    bool key;
    string text;
    if (argc == 2)
    {
        for (int i = 0, l = strlen(argv[1]); i < l; i ++)
        {
            if (!isdigit(argv[1][i]))
            {
                key = false;
                printf("Usage: %s key\n",argv[0]);
                return 1;
            }
            else
            {
                key = true;
            }
        }

        if (key)
        {
            int crypKey = atoi(argv[1]);
            char cypher;
            text = get_string("Text: ");

            printf("ciphertext: ");
            for (int i = 0, l = strlen(text); i < l; i++)
            {
                if (isalpha(text[i]))
                {
                    if (islower(text[i]))
                    {
                        cypher = text[i] - 97;
                        cypher = (cypher + crypKey) % 26;
                        cypher = cypher + 97;
                        printf("%c", cypher);
                    }
                    else
                    {
                        cypher = text[i] - 65;
                        cypher = (cypher + crypKey) % 26;
                        cypher = cypher + 65;
                        printf("%c", cypher);
                    }



                }
                else
                {
                    printf("%c", text[i]);
                }
            }
            printf("\n");
            return 0;

        }

    }
    else
    {
        printf("Usage: %s key\n",argv[0]);
        return 1;
    }
}
