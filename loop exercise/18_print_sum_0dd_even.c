#include <stdio.h>
int main()
{
    int i = 1, val, os = 0, es = 0;

    while (i <= 10)
    {
        printf("enter a value :");
        scanf("%d", &val);

        if (val % 2 == 0)
        {
            es = es + val;
        }
        else
        {
            os = os + val;
        }
        i++;
    }
    printf(" sum even=%d\n", es);
    printf(" sum odd=%d\n", os);
    return 0;
}