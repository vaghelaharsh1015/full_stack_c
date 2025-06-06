// 56789 
//  4567 
//   345 
//    23 
//     1
#include <stdio.H>
int main()
{
    for (int i = 5; i >= 1; i--)
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