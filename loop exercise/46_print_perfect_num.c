#include <stdio.h>
int main()
{
    int i = 1, val = 0, sum = 0, tmp = 0, range = 1;

    while (range <= 1000)
    {

        while (i < val)
        {
            val = range;
            tmp = val;
            sum=0;
            i=1;
            while (i < val)
            {
                if (val % i == 0)
                {
                    sum = sum + i;
                }
                i++;
            }
        }
        if (tmp == sum)
        {
            printf("perfect=%d\n", i);
        }
        range++;
    }
    return 0;
}