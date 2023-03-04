#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x; // creates a pointer called x to store the address of an int
    int *y; // creates a pointer called y to store the address of an int
    // just to be clear:
    // the above lines basically say "i am going to store two ints
    // at addresses stored in x and y"

    x = malloc(sizeof(int)); // malloc finds an address for us and stores it in x

    *x = 42; // we then store 42 at the address in x
    *y = 13; // and we try to store 13 at the address in y
    // but the above line is bad
    // because we didn't store an address in y, 
    // so the pointer *y will be following a garbage value as an address, 
    // so we will end up storing 13 somewhere random 

    // so first we should give y an actual value (a valid address)
    y = x;
    
    // and then we can edit the information at that address
    *y = 13;

    printf("x: %p\n", x);
    printf("*x: %i\n", *x);
    printf("y: %p\n", y);
    printf("*y: %i\n", *y);

    // Remember, shoots and ladders: 
    // * runs down pointer arrows
    // & runs back up pointer arrows
}