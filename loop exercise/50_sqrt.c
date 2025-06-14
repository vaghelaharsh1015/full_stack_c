#include <stdio.h>
int main()
{
    int i = 1, val = 0, sqrt = 0;
    printf("enter a value :");
    scanf("%d",&val);

    while (i < val)
    {
        if (i * i > val)
        {
            printf("not posi");
            break;
        }
        else if (i * i == val)
        {
            printf("sqrt=%d\n",i);
            break;
        }
    
        i++;
    }
    return 0;
}