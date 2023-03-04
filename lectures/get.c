#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);
    printf("&x: %p\n", &x);

    // this works even though malan says it shouldn't
    // I think it's something to do with having the int section above
    // have no idea what's going on
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    printf("&s: %p\n", &s);

    // malan says this should work, as long as my input is 3 chars or fewer
    // there's no getting around the problem that you have to allocate memory 
    // if you want to make sure you don't bump into garbage
    /*
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    */
}