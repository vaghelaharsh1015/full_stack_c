//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 4; j >= 5-i; j--)
        {
            printf(" ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}