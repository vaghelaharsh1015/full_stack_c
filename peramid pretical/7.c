#include <stdio.h>
int main()
// 10101 
// 01010 
// 10101 
// 01010 
// 10101 
{
    int i = 1, j = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j =1; j <= 5; j++)
        {
            if ((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}