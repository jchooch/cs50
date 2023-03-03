#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

int main(void)
{
    int n = get_int("Number of scores: ");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }    

    printf("Average: %f\n", average(n, scores));
}

float average(int length, int array[])
{
    float sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    float average = sum / length;
    return average;
}