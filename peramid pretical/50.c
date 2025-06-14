// 555555555 
//  4444444 
//   33333 
//    222 
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
        for (int j = 1; j <= i+i-1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}