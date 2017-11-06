#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string fullname = get_string();
    int namelength = strlen(fullname);
    //char space = ' ';
    for (int i = 0; i < namelength; i++)
    {
        if (i == 0 || fullname[i-1] == ' ')
        {
            printf("%c", toupper(fullname[i]));
        }
    }
    printf("\n");
}