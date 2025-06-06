#include <stdio.h>
int main()
{
    int i = 1, val = 0, sum = 0;
    /*while (i<=3)
    {
        printf("enter value no  %d:",i);
        scanf("%d",&val);

        sum =sum+val;
        i++;
    }*/
    for (i = 1; i <= 3; i++)
    {
        printf("enter a value no %d:", i);
        scanf("%d", &val);

        sum = sum + val;
    }

    printf("sum is %d\n", sum);
    return 0;
}