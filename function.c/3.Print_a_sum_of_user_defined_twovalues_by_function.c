#include <stdio.h>
void dosum();

int main()
{
    dosum();

    return 0;
}
void dosum()
{
    int val1=0,val2=0,sum=0;

    printf("enter a val1:");
    scanf("%d",&val1);

    printf("enter a val2:");
    scanf("%d",&val2);

    sum=val1+val2;
    printf("the sum of %d and %d is %d",val1,val2,sum);
}