#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    while (i <= 10)
    {
        if (i == 4)
            goto jump1;
        printf("%d\n", i);
        i++;
    }
    // for (i = 1; i <= 12; i++)
    //  {
    //     if (i == 12)
    //         goto jump1;
    //     printf("%d\n", i);
    // }

jump1:
    printf("this is jump 1\n");
    goto jump2;

jump2:
    printf("this is jump2\n");

    return 0;
}