#include <stdio.h>

// Find the largest number in an array of 6 integers.

int main()
{
    int arr[] = {10,2,3,4,5,6};
    int max = arr[0],posi=0;

    for (int i = 0; i <= arr[i]; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            posi=i;
        }
    }
    printf("The largest number : %d", posi);

    return 0;
}