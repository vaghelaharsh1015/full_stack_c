// 54321 
//  4321 
//   321 
//    21 
//     1

#include <stdio.H>
int main()
{
    int i = 1, j = 0;
    for (i = 5; i >= 1; i--)
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