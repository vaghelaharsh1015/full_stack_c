#include <stdio.h>

// Count how many times a specific number appears in an array.

int main()
{
    int arr[6] = {12,45,69,78,99},count=0;

    for(int i = 0; i <7; i++)
    {
        if (arr[i]==arr[i])
        {
            count++;
        }
        
        printf(" %d ",count);
    }
    return 0;
}