#include <stdio.h>
int main()
{
    int val=1, rem=0, bin=0, base=1;
    printf("enter a value:");
    scanf("%d", &bin);

    while (bin > 0)
    {
        rem = bin % 10;
        val = val + (rem * base);
        base = base * 2;
        bin = bin / 10;
    }
    printf("val=%d", val);
    return 0;
}
