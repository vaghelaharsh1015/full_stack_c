#include <stdio.h>
int main()
{
    int i = 1, val1, val2, hcf;
    printf("enter a value1 :");
    scanf("%d", &val1);

    printf("enter a value2 :");
    scanf("%d", &val2);

    while (i <= val1 && i <= val2)
    {
        if (val1 % i == 0 && val2 % i == 0)
        {
            hcf = i;
            
        }
        i++;
    }
    printf("%d",hcf);
    return 0;
}