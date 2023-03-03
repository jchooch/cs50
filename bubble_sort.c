#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {100, 42, 37, 9, 14, 1, 2, 1, 0, -1, 22, 55, 23, 71};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    printf("Length: %i\n", length);

    printf("Unsorted numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    int swaps = 0;
    for (int i = 0; i < length - 1; i++)
    {
        swaps = 0;
        for (int j = 0; j < length - 1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int smaller = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = smaller;
                swaps++;
            }
        }
        if (swaps == 0)
        {
            printf("Got it after %i passes!\n", i);
            break;
        }
    }
    printf("Sorted numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    return 0;
}