//     5
//    54
//   543
//  5432
// 54321
#include <stdio.h>
int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 4; j >=5 - i; j--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}