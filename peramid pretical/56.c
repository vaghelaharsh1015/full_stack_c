// 543212345 
//  4321234 
//   32123 
//    212 
//     1 
#include<stdio.h>
int main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int j =4 ; j >= i; j--)
        {
            printf(" ");
        }
        
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        for (int j = 2; j <= i; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}