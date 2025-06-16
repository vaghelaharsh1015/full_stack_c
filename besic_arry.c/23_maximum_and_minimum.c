#include <stdio.h>

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int max = arr[0];
    int lar = arr[0];

    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < lar)
        {
            lar = arr[i];
        }
    }
    // for (int  i = 0; i <=10; i++)
    // {
    //     if (arr[i] < lar )
    //     {
    //         lar =arr[i];
    //     }

    // }

    printf("The largest number : %d and lar num is :%d", max, lar);

    return 0;
}