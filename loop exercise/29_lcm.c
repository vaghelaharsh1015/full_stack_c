#include <stdio.h>
int main()
{
    int i = 2, val1, val2, lcm;
    printf("enter a value1 :");
    scanf("%d", &val1);

    printf("enter a value2 :");
    scanf("%d", &val2);

    while (i <= val1 && i <= val2)
    {
        if (val1 % i == 0 && val2 % i == 0)
        {
            lcm = i;
            break;
        }
        i++;
    }
    printf("%d",lcm);
    return 0;
}