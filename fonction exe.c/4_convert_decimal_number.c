#include<stdio.h>
void convertdesimal(int);

int main()
{
    int val;
    printf("enter a value :");
    scanf("%d",&val);

     convertdesimal(val);

    return  0;
}
void convertdesimal(int val)
{
    int  rem = 0, bin = 0, muli = 1;
    while (val > 0)
    {
        rem = val % 2;
        bin = bin + (rem * muli);
        val = val / 2;
        muli = muli * 10;
    }
    printf("%d", bin);
}
