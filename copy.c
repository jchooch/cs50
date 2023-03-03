#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s_1 = get_string("s_1: "); // equivalent to string s_1 = get_string(...)
    if (s_1 == NULL) // This would happen, e.g., if too much memory was requested (the string was too long).
    {
        return 1; // Return with error code
    }
    
    char *t_1 = s_1; // equivalent to string t_1 = s_1
    if (t_1 == NULL) // This would happen, e.g., if too much memory was requested (the string was too long).
    {
        return 1; // Return with error code
    }

    if (strlen(t_1) > 0)
    {
        t_1[0] = toupper(t_1[0]);
    }

    printf("s_1: %s\n", s_1);
    printf("t_1: %s\n", t_1);
    printf("NOTICE THAT CHANGING T_1 ALSO CHANGES S_1, BECAUSE WE JUST COPIED THE POINTER.\n");

    char *s_2 = get_string("s_2: ");
    if (s_2 == NULL) // This would happen, e.g., if too much memory was requested (the string was too long).
    {
        return 1; // Return with error code
    }

    char *t_2 = malloc(strlen(s_2) + 1);
    if (t_2 == NULL) // This would happen, e.g., if too much memory was requested (the string was too long).
    {
        return 1; // Return with error code
    }

    strcpy(t_2, s_2); // Copy the string from s_2 to t_2. So the syntax is strcpy(target, source).
    /* What does strcopy do? It does this:
    for (int i = 0, n = strlen(s_2) + 1; i < n; i++)
    {
        t_2[i] = s_2[i];
    }
    */

    if (strlen(t_2) > 0)
    {
        t_2[0] = toupper(t_2[0]);
    }

    printf("s_2: %s\n", s_2);
    printf("t_2: %s\n", t_2);
    printf("NOW ONLY T_2 IS CAPITALISED; S_2 IS NOT.\n");

    free(t_1); // This is important for programs which keep running.
    free(t_2); // This is important for programs which keep running.

    return 0;
}

// malloc
// free