#include <stdio.h>
int main()
{
    int i = 1, avr, val,sum=0;

    while (i<=10)
    {
        printf("enter a value:");
        scanf("%d",&val);

        sum = sum+val;
        avr = sum/i;
        i++;
    }
    printf("avr=%d", avr);
    return 0;
}