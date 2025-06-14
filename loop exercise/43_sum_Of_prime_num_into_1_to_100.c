#include <stdio.h>
int main()
{
    int  i, j, isprime , sum = 0;
    
    
    for (i = 2; i <= 100; i++)
    {
        isprime = 1;
        for (j = 2; j <=i/2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            sum += i;
        }
    }

    printf("sum %d\n", sum);
    return 0;
}