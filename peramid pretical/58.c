//     5
//    545
//   54345
//  5432345
// 543212345
#include <stdio.H>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 4; j <= i + 2; j++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i+1; j--)
        {
            printf("%d", j);
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}