// 12345
//  2345
//   345
//    45
//     5
#include <stdio.H>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j =1; j <= i; j++)
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