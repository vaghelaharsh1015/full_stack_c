// 543212345 
//  5432345 
//   54345 
//    545 
//     5 
#include <stdio.H>
int main()
{
    for (int i = 1; i <= 5; i++)
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