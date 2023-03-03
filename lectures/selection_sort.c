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

    for (int i = 0; i < length; i++)
    {
        int smallest = numbers[i];
        int smallest_index = i;
        for (int j = i; j < length; j++)
        {
            if (numbers[j] < smallest)
            {
                smallest = numbers[j];
                smallest_index = j;
            }
        }
        numbers[smallest_index] = numbers[i];
        numbers[i] = smallest;
    }
    printf("Sorted numbers: ");
    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    return 0;
}