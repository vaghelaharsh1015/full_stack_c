#include <stdio.h>
int main()
{
    int val, rem = 0, bin = 0, muli = 1;

    printf("enter a value:");
    scanf("%d", &val);

    while (val > 0)
    {
        rem = val % 2;
        bin = bin + (rem * muli);
        val = val / 2;
        muli = muli * 10;
    }
    printf("bin=%d", bin);
    return 0;
}