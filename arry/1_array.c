#include <stdio.h>
int main()
{
    int i, arry[5];

    for (i = 1; i <= 5; i++)
    {
        printf("enter a number:");
        scanf("%d",&arry[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n",arry[j]);
    }

    return 0;
}