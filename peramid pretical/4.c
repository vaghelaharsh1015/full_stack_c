#include <stdio.h>
int main()
{
    int i =1, j = 0;

    while (i <= 5)
    {
        j = 1;

        while (j <= 5)
        {
            printf("1");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
// 11111 
// 11111 
// 11111 
// 11111 
// 11111