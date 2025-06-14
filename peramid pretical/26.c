// 13579 
// 3579 
// 579 
// 79 
// 9
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i+=2)
    {
        for (int j = i; j < 10; j+=2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}