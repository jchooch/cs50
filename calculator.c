#include <stdio.h>
#include <cs50.h>

// try x=1, y=3

int main(void)
{
    long x = get_int("x? (good to try x=1)");
    long y = get_int("y? (good to try y=3) ");
    float z = (float) x / (float) y;
    printf("%.20f\n", z);

    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}