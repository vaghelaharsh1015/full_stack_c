#include <stdio.h>
int main()
{
    int  val=0, rev=0, tmp=0, digit=0;
    printf(" enter a value:");
    scanf("%d", &val);


    tmp = val;

    while (val > 0)
    {
        digit = val % 10;
        rev = (rev * 10) + digit;
        val = val / 10;
    }

    if (tmp == rev)
    {
        printf("yes");
    }
    else
    {
        printf("no");
        
    }
    return 0;
}