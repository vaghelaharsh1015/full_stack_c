#include <stdio.h>
int main()
{
    int i = 2, val, renge = 3;

    while (renge <= 100)
    {
        i = 2;
        val = renge;

        while (i < val)
        {

            if (val % i == 0)
                break;
                i++;
        }
        if (val == i)
        {
            printf("%d is prime\n", val);
        }
        renge++;
    }

    return 0;
}