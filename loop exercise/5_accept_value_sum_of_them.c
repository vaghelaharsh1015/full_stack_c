
#include <stdio.h>
int main()
{
    int i = 1, sum = 0, val = 0;

    while (i <= 10)
    {
        printf("enter a  value numer :");
        scanf("%d", &val);
        sum = sum + val;
        i++;
    }
    printf("sum is %d\n", sum);
    return 0;
}