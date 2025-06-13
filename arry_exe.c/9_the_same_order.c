#include <stdio.h>

int main()
{
    int arr[7];

    for (int i = 0; i <8 ; ++i)
    {
        printf("enter a number:");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <8 ; ++i)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}