// 123454321 
//  2345432 
//   34543 
//    454 
//     5 
#include <stdio.h>
int main()
{
    for (int i =1; i <= 5; i++)
    {
        for (int j = 4; j <=i+2; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        for (int j = 4; j >=i; j--)
        {
            printf("%d",j);
        }        
        printf("\n");
    }
    return 0;
}