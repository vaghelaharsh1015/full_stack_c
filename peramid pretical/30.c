// 1
// 11
// 101
// 1001
// 11111
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2 || i == 4 && (j == 2 || j == 3))
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}