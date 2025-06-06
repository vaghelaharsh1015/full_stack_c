#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        if (i == 8)
            break;
        printf("%d\n", i);
        i++;
    }

    return 0;
}