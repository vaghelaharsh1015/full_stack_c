#include<stdio.h>

void printdesimal(int);

int main()
{
    int bin=1;
    printf("enter a bin :");
    scanf("%d",&bin);

    printdesimal( bin);

    return  0;
}
void printdesimal(int bin)
{
    int rem=0,base=1,val=0;

    while (bin > 0)
    {
        rem = bin % 10;
        val = val + (rem * base);
        base = base * 2;
        bin = bin / 10;
    }
    printf("%d",val);
}

