//     5
//    44
//   333
//  4444
// 11111
#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
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