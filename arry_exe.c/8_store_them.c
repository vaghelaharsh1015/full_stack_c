#include<stdio.h>
int mian()
{
    char arr[10];

    printf("enter a 10 char arry :");

    for(int i=0;i <10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <10 ; ++i)
    {
        printf("%d",&arr[i]);
    }

    return  0;
}