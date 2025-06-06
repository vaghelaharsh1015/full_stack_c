#include <stdio.h>
int main()
{
    int i = 1, val, cnt=0 ;

    while (i <= 10)
    {
        printf("enter value:");
        scanf("%d", &val);

        if (val%2!=0)
        {
            cnt ++;
        }
        i++;
    }
    printf(" odd num is %d\n", cnt);
    
    return 0;
}