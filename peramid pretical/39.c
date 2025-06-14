//     1
//    21
//   321
//  4321
// 54321

#include <stdio.H>
int main()
{
    int i = 1, j = 0;
    for (i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}