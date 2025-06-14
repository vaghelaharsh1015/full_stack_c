// 56789 
// 4567 
// 345 
// 23 
// 1 
#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j < i+i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}