#include <stdio.h>
int main()
{
    int i;
    int arry[5] = {10, -10, 20, 15, -12};

    for (i = 0; i < 5; ++i)
    {
        if (0 > arry[i])
            printf("%d ", arry[i]);
    }
    return 0;
}