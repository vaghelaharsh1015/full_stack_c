#include <stdio.h>
int getaddition(int,int);
int main()
{
    int a=10,b=20,sum=0;

    sum=getaddition(a,b);
    printf("addition is %d\n",sum);

    printf("addition is %d\n",getaddition(10,15));

    return  0;
}
int getaddition(int val1,int val2)
{
    return val1+val2;
}