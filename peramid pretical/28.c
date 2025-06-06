// 1 
// 00 
// 111 
// 0000 
// 11111 

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=i;j++)
        {
            printf("%d", i%2);
        }
        printf("\n");
    }

    return 0;
}