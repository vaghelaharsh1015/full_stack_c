#include <stdio.h>
int main()
{
    int i = 1, digit, sum, tmp;

    while (i <= 1000)
    {
        sum = 0;
        tmp = i;

        while (tmp > 0)
        {
            digit = tmp % 10;
            sum = (digit * digit * digit) + sum;
            tmp = tmp / 10;
        }
        if (sum == i)
        {
            printf("%d \n", sum);
        }
        i++;
    }

    return 0;
}