#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int flag;
    string text;
    string alphabetLower = "abcdefghijklmnopqrstuvwxyz";
    string alphabetUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key;
    if (argc == 2)
    {
        int n = strlen(argv[1]);
        if (n == 26)
        {
            for (int i = 0; i < n; i++)
            {
                if (!isalpha(argv[1][i]))
                {
                    flag = 1;
                    printf("Usage: %s key\n", argv[0]);
                    return flag;
                }
                else
                {
                    for (int j = i - 1; j >= 0; j--)
                    {
                        if (toupper(argv[1][i]) == toupper(argv[1][j]))
                        {
                            flag = 1;
                            printf("The key must contain irrepetible letters\n");
                            return flag;
                        }
                        else
                        {
                            flag = 0;
                        }
                    }
                }
            }
        }
        else
        {
            flag = 1;
            printf("The key must contain 26 letters\n");
            return flag;
        }
    }
    else
    {
        flag = 1;
        printf("Usage: %s key\n", argv[0]);
        return flag;
    }
    if (flag == 0)
    {
        key = argv[1];
        text = get_string("Text: ");
        for (int k = 0, m = strlen(text); k < m; k++)
        {
            if (isalpha(text[k]))
            {
                if (isupper(text[k]))
                {
                    for (int l = 0; l < 26; l++)
                    {
                        if (text[k] == alphabetUpper[l])
                        {
                            printf("%c", toupper(key[l]));
                        }
                    }
                }
                else
                {
                    for (int l = 0; l < 26; l++)
                    {
                        if (text[k] == alphabetLower[l])
                        {
                            printf("%c", tolower(key[l]));
                        }
                    }
                }
            }
            else
            {
                printf("%c", text[k]);
            }
        }
    }
    printf("\n");
    return flag;
}
