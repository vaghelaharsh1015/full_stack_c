// 11111
//  2222
//   333
//    44
//     5
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}