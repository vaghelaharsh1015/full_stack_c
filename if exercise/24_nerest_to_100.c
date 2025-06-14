#include <stdio.h>
int main()
{
    int value1, value2, ax, bx;
    printf("enter A value1: ");
    scanf("%d", &value1);

    printf("enter a value2: ");
    scanf("%d", &value2);

    if (value1 == value2)
    {
        printf(" value are both ");
    }
    else
    {
        if (value1 > 100)
            ax = value1 - 100;
        else
            ax = 100 - value1;

        if (value1 > 100)
            bx = value2 - 100;

        else
            bx = 100 - bx;

        if (ax < bx)
            printf("%d value is near to 100 ", value1);

        else if (bx < ax)
            printf("%d value is near to 100", value2);

        else
            printf("both nuber is same distan");
    }
    return 0;
}