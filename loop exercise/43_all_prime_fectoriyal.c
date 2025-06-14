#include <stdio.h>
int main()
{
    int i, j, isprime = 1, fect = 1;

    for (i = 2; i <= 100; i++)
    {
        isprime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            fect = fect * isprime;
            isprime;
        }
    }

    printf("fect %d\n", fect);
    return 0;
}