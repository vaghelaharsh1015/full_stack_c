#include <stdio.h>
int main()
{
    int i=1, val, num = 0;

    while (i<=10)
    {
        printf("enter value:");
        scanf("%d",&val);

        if (0 >val)
        {
            printf("neg num is %d\n",val);
            i++;
        }
    }

    return 0;
}