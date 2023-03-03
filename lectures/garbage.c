#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }

    // NOW WE WILL SEE "GARBAGE" IN MEMORY. 
    // OLD VALUES IN MEMORY WHICH HAS BEEN NEWLY 
    // ALLOCATED TO OUR PROGRAM BUT NOT YET OVERWRITTEN.
}