#include <stdio.h>
int main()
{
    int i = 1, val;

    while (i <= 10)
    {
        printf("enter a value:");
        scanf("%d", &val);

        if (val % 2 != 0)
        {
            printf("odd  value=%d\n", val);
        }
        i++;
    }

    return 0;
}
