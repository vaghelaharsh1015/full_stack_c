#include <stdio.h>
int main()
{
    int val, fact = 1, sum = 0, digit = 0, tmp;
    printf("enter a value: ");
    scanf("%d", &val);

    tmp = val;

    while (val > 1000)
    {
        digit = val % 10;
        fact = 1;

        if (digit >= 1)
        {
            fact = fact * digit;
            digit--;
        }
        sum = sum + fact;
        fact = 1;
        val = val / 10;
    }
    if (sum == tmp)
    {
        printf("number is storng");
    }
    else
    {
        printf("number is not storng");
    }
    printf("%d\n is storng num", val);
    return 0;
}