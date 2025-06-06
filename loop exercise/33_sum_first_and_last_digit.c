#include <stdio.h>
int main()
{
    int val, fd, ld, ans;
    printf("enter a value:");
    scanf("%d", &val);

    ld = val % 10;
    val = val / 10;



    while (val > 0)
    {
        fd = val % 10;
        val = val / 10;
    }

    printf("sum of first and last digit=%d", fd + ld);
    return 0;
}