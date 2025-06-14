#include <stdio.h>

// find max number

int main()
{
    int arr[] = {6, 5, 2, 10, 12};
    int max = 0, sl = 0;

    max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    sl = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > sl && arr[i] < max)
            sl = arr[i];
    }

    printf("%d", sl);

    return 0;
}