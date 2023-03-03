#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    int success = 0;

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            success = 1;
        }
    }
    if (success == 0)
    {
        printf("Not found\n");
    }

    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    success = 0;
    
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            success = 1;
        }
    }
    if (success == 0)
    {
        printf("Not found\n");
    }
}