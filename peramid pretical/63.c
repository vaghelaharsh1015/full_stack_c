#include <stdio.h>
int main()
{
    int j;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (int j = 4; j >= i; j--)
        {
            // if (j == 1)
            //     continue;
            printf(" ");
        }
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
                //    if (j == 1)
                // continue;
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}