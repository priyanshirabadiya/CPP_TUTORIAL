#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[n], j, t, i;

int bubble()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    bubble();

    printf("\nBubble sort array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}