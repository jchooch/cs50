#include <cs50.h>
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

/* THIS WON'T WORK
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
*/

// DO IT THIS WAY. NOTE THE DIFFERENCES
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}