#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    // we designate that p will be a pointer with the asterisk
    // we access the memory location of n by prefixing with the ampersand
    int *p = &n;
    printf("Value of n: %i\n", n);
    printf("Location of n in memory: %p\n", p); // I can reference p now without the asterisk
    printf("Dereference p to get the value at the location of n: %i\n", *p);
    string str = "Hi!";
    printf("string version of string: %s\n", str);

    // The below is just how the syntax works. It should be accepted and memorised!
    char *s = "Hi!"; // We create a string by creating a char pointer which will then point to a block of memory which ends in a nul char.
    printf("*char version of string: %s\n", s); // If we print with %s, the whole block of chars will print up to the nul char.
    printf("Location stored by pointer s: %p\n", s); // If we print with %p, the location pointed to by the pointer is printed. This will be the location of the first char in the string memory block.
    printf("Location of first element of string: %p\n", &s[0]); // The first element of s is just the first char, which has the same address as is stored by the pointer s.
    printf("Location of second element of string: %p\n", &s[1]); // But the second element of s has a different location.
    printf("Location of third element of string: %p\n", &s[2]);
    printf("Location of fourth element of string (nul): %p\n", &s[3]); // This should print the location of the nul char.
    printf("Integer form of nul char: %i\n", s[3]); // This should print the integer form of the nul char at/after the end of the string.
    printf("Char form of nul char (should be blank): %c\n", s[3]); // This should print the nul char at/after the end of the string, so it should be blank.

    printf("s[0]: %c\n", s[0]);
    printf("s[1]: %c\n", s[1]);
    printf("s[2]: %c\n", s[2]);
    printf("s[3]: %c\n", s[3]);

    // If I were to do printf("%c\n", s), it wouldn't work, because s is not a char.
    // To get the char, I have to dereference s: i.e. take the location stored in s and retrieve the value from that location.
    // If I did printf("%s\n", s), this would be done automatically (and repeatedly until nul).

    printf("*s: %c\n", *s);
    printf("*(s+1): %c\n", *(s+1)); // Note the syntax for pointer arithmetic!
    printf("*(s+2): %c\n", *(s+2)); // Note the syntax for pointer arithmetic!
    printf("*(s+3): %c\n", *(s+3)); // Note the syntax for pointer arithmetic!

    printf("%s\n", s); // This will print from the start of s to the nul char.
    printf("%s\n", s+1); // This will print from the second element of s to the nul.
    printf("%s\n", s+2); // This will print from the third element of s to the nul.

    // If you were iterating through an array of another data type, you can still just do +1 to go to the next thing in memory.
    // You don't have to worry about exactly how many bytes different data types are using. The C compiler figures that our for you.
}

/* 
typedef int integer;
typedef char *string;
*/