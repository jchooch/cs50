#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    string first = get_string("What's your first name?");
    string last = get_string("What's your last name?");
    printf("---------- Hello, %s %s!\n", first, last);
    string nick = get_string("What's your nickname?");
    printf("---------- OK, I'll call you %s %s.\n", nick, last);
    char *name = "Hal";
    printf("---------- My name is %s, by the way. Nice to meet you :)\n", name);

    int age = get_int("How many years old are you?");
    if (age < 20) {
        printf("---------- Wow, at %i, you're pretty young!\n", age);
    }
    else if (age > 60) {
        printf("---------- Wow, at %i, you're pretty old!\n", age);
    }
    else {
        printf("---------- Wow, at %i, you're in the prime of your life!\n", age);
    }
}

/* Compiled with: $ gcc -g hello.c -o hello -lcs50 -lm */