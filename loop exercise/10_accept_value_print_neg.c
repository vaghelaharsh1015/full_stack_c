#include <stdio.h>
int main()
{
    int i = 1, val, cnt=0 ;

    while (i <= 10)
    {
        printf("enter value:");
        scanf("%d", &val);

        if (0>val)
        {
            cnt ++;
        }
        i++;
    }
    printf("neg num is %d\n", cnt);
    
    return 0;
}