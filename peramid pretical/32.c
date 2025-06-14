// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main()
{
    int i = 5, j = 0;

    for (i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}