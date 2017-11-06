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
    string num = argv[1];
    int key = atoi(num);
    string phrase = get_string();
    for (int i = 0, lengthp = strlen(phrase);i < lengthp;i++)
    {

        if ( islower(phrase[i]))
        {
        int letter = phrase[i] - 97;
        int cryptletter = (letter + key)%26 + 97;
        printf("%c", (char)cryptletter);
        }
        else if (isupper(phrase[i]))
        {
        int letter = phrase[i] - 65;
        int cryptletter = (letter + key)%26 + 65;
        printf("%c", (char)cryptletter);
        }
        else
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");
}