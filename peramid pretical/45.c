//     1
//    23
//   345
//  4567
// 56789
#include <stdio.H>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("-");
        }

        for (int j = i; j < i + i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}