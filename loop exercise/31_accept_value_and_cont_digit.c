#include <stdio.h>
int main()
{
    int val, con=0;
    printf("enter a value :");
    scanf("%d", &val);

    while (val >= 0)
    {
        val = val / 10;
        con++;
    }
    printf("con=%d\n", con);
    return 0;
}