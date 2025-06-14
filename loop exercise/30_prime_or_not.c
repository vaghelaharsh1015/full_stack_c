#include <stdio.h>
int main()
{
    int num, i, isprime = 1;
    printf("enter a value:");
    scanf("%d", &num);

    if (num <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }

        }
    }
    if (isprime)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}