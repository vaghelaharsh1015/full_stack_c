// 123454321 
//  1234321 
//   12321 
//    121 
//     1 
#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}