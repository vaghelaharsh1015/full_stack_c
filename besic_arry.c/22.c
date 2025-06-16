#include <stdio.h>

// Find the largest number in an array of 6 integers.

int main()
{
    int arr[] = {12,36,45,69,78,99};
    int lar = arr[0];

    for (int i = 0; i <= 5; i++)
    {
        if(arr[i] < lar)
        {
            lar = arr[i];
        }
    }
    printf("The largest number : %d", lar);

    return 0;
}