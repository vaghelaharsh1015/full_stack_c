//     1
//    212
//   32123
//  4321234
// 543212345
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for (int j = 2; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}
