#include <stdio.h>
int main()
{
    int i=1,val,sum=0;
    printf("enter a val:");
    scanf("%d",&val);

    while (i < val)
    {
        if (val % i == 0)
        {
            printf("%d\n",i);
            sum=sum+i;  
        }
        i++;
    }
    printf("sum=%d",sum);
    return 0;
}