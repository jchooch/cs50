#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What's your name?: ");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Length according to me: %i\n", n);

    int strlen_n = strlen(name);
    printf("Length according to string.h: %i\n", strlen_n);
}