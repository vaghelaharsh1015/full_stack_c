// 55555
//  4444
//   333
//    22
//     1
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 5-i; j++)
        {
            printf("%d",5-i);
        }
        printf("\n");
    }
    return 0;
}