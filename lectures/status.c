#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc <= 2)
    {
        printf("Missing command-line argument!\n");
        // This is a status code/output. We can use it to encode what the error was! E.g. the famous "404: Page Not Found". 
        // The status can be viewed in the command line by running the code, then running "echo $?".
        return 1; 
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
    }
}