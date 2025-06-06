// # include<stdio.h>
// int main()
// {
//     int i=1,val;
//     printf("enter a value :");
//     scanf("%d",&val);

//     while (i<val)
//     {
//         if (val%i==0)
//         {
            
//         }
        
//     }
    
// }
#include <stdio.h>
int main()
{
    int i=1,val,tmp;

    printf("enter a value:");
    scanf("%d",&val);

    while (i < val)
    {
        if (val % i == 0)
        {
            tmp=i;
        }
        i++;

    }
    printf("high fect=%d",tmp);
    return 0;
}