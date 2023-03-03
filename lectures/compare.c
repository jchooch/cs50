#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    /* THIS CODE WILL NOT WORK 
    BECAUSE IT WILL COMPARE THE MEMORY ADDRESSES OF THE FIRST CHAR IN THE STRING
    RATHER THAN THE ACTUAL FULL SEQUENCE OF CHARS THEMSELVES
    */
    string s = get_string("s: ");
    string t = get_string("t: ");
    if (s == t)
    {
        printf("Broken function (using ==): Same\n");
    }
    else
    {
        printf("Broken function (using ==): Different\n");
    }

    /* THIS WILL WORK */
    s = get_string("s: ");
    t = get_string("t: ");
    if (strcmp(s, t) == 0)
    {
        printf("Fixed function (using strcmp): Same\n");
    }
    else
    {
        printf("Fixed function (using strcmp): Different\n");
    }

}