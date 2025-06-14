#include <stdio.h>
int main()
{
    int val, fd, sld;
    printf("enter a value:");
    scanf("%d", &val);

    val = val / 10;
    sld = val % 10;

    while (val > 0)
    {
        fd = val % 10;
        val = val / 10;
    }
    printf("sum of second and last digit=%d", sld + fd);
    return 0;
}