#include "source.h"

int main(void)
{
    sort();

    return 0;
}

void sort(void)
{
    int arr[10];
    int i, j, min, t;

    printf("Please enter 10 integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 9; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }
}