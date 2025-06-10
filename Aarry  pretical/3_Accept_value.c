#include<stdio.h>
int main()
{
    int i=0;
    int arr[5];
    int sum=0;

    for (int i = 0; i<5 ; ++i)
    {
        printf("enter a value:",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
//    for (int i = 0; i < 5; ++i)
//    {
        printf(" %d",sum);
//    }
    return  0;
}