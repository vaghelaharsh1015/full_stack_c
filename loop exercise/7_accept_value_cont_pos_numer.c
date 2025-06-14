#include <stdio.h>
int main()
{
    int i=1, val;

    while (i<=10)
    {
        printf("enter value:");
        scanf("%d",&val);

        if (0 < val)
        {
            printf("pos num is %d\n",val);
            i++;
        }
    }

    return 0;
}