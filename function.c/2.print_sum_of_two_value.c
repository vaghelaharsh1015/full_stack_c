#include <stdio.h>
void dosum();

int main()
{
    dosum();

    return 0;
}
void dosum()
{
    int val1 = 10, val2 = 15, sum = 0;

    sum=val1+val2;
    printf("the sum of %d and %d is %d",val1,val2,sum);
}