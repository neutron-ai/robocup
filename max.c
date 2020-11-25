#include "source.h"

int main(void)
{
    int a, b, Max;

    printf("Please enter 2 integers:\n");
    scanf("%d%d", &a, &b);

    Max = max(a, b);

    printf("%d", Max);
}

int max(int a, int b)
{
    return a > b ? a : b;
}