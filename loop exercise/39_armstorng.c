#include <stdio.h>
int main()
{
    int val = 0, digit = 0, sum = 0, tmp ;
    printf("enter a number:");
    scanf("%d", &val);

    tmp=val;

    while (val > 0)
    {
        digit = val % 10;
        sum = (digit * digit * digit) + sum;
        val = val / 10;
    }
    if (tmp == sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}