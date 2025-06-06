#include <stdio.h>
int main()
{
    int num;
    printf("enter a value  of num:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("a number even.\n ");
    }
    else
    {
        printf(" a number is odd ");
    }

    return 0;
}