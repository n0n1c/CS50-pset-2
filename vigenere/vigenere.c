#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
        {
            printf("Please give me a positive integer!\n");
            return 1;
        }
    int num = strlen(argv[1]);
    int keyarray[num];
    for (int i = 0;i < num;i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Please only use letters.\n");
            return 1;
        }
        else if (islower(argv[1][i]))
        {
            keyarray[i] = (argv[1][i] - 97) % 26;
        }
        else if (isupper(argv[1][i]))
        {
            keyarray[i] = (argv[1][i] - 65) % 26;
        }
    }
    
    string phrase = GetString();
    for (int i = 0, lengthp = strlen(phrase), j = 0;i < lengthp;i++)
    {
        if (islower(phrase[i]))
        {
        int letter = phrase[i] - 97;
        int cryptletter = (letter + keyarray[j % num]) % 26 + 97;
        printf("%c", (char)cryptletter);
        j++;
        }
        else if (isupper(phrase[i]))
        {
        int letter = phrase[i] - 65;
        int cryptletter = (letter + keyarray[j % num]) % 26 + 65;
        printf("%c", (char)cryptletter);
        j++;
        }
        else
        {
            printf("%c", phrase[i]);
        }
    
    }
    printf("\n");
}