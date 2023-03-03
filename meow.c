#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 3;
    while (i > 0)
    {
        printf("Meow\n");
        i--;
    }    

    printf("Purrr\n");

    i = 1;
    while (i <= 3)
    {
        printf("Meow\n");
        i++;
    }

    printf("Purrr\n");

    i = 0;
    while (i < 3)
    {
        printf("Meow\n");
        i++;
    }

    printf("Purrr\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n");
    }

    /* Meow forever...
    while (true)
    {
        printf("Meow\n");
    }
    */
}