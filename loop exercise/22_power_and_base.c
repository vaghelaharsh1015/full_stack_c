#include <stdio.h>
int main()
{
    int result=1, power,base;

    printf("enter a power:");
    scanf("%d", &power);

    printf("enter a base:");
    scanf("%d", &base);

    while (1 <= power)
    {

        result =result*base;
        power--;
    }
    printf("result is %d\n",result);

    return 0;
}