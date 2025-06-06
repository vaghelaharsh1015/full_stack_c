#include <stdio.h>
int main()
{
    int i=1,val;

    printf("enter a value:");
    scanf("%d",&val);

    while (i <= val)
    {
        if (val % i == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}