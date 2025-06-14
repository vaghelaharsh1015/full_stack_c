#include<stdio.h>
int getsumofreng(int);

int main()
{
    int val;
    int sum;
    printf("enter a value of reng in 1 to :");
    scanf("%d",&val);

    sum=getsumofreng(val);

    printf("\n the sum of number from 1 to %d: %d\n\n",val,sum);
    return 0;
}
int getsumofreng(int n1)
{
    int res;
    if(n1==1)
        return (1);
    else
        res=n1+ getsumofreng(n1-1);

    return (res);
}