 
#include <stdio.h>
int main()
{
    int val, sd, sld;
    printf("enter a value:");
    scanf("%d", &val);

    val = val / 10;
    sld = val % 10;

    while (val > 10)
    {
        sd = val % 10;
        val = val / 10;
    }
    printf("sum of second and last digit=%d", sld + sd);
    return 0;
}