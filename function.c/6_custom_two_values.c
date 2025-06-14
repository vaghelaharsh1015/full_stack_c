#include<stdio.H>

void dosum(int val1,int val2)
{
    int sum=0;

    sum=val1+val2;
    printf("the sum  %d and  %d is %d\n",val1,val2,sum);
}
int main()
{
    dosum(10,15);
    dosum(10,25);
    dosum(150,15);

    return 0;
}