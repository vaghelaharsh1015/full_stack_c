#include <stdio.h>

// Find the position (index) of a given element in an array.

int main()
{
    int i = 0, num = 0;
    int arr[] = {10, 15, 36, 42, 55};
    int found = 0;

    printf("Enter a number which you are finding: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            printf("Number %d found at index %d\n", num, i);
            found = 1;
            break; // exit loop if found
        }
    }

    if(!found)
    {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}