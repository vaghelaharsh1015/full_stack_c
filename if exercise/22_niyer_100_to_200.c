#include <stdio.h>
int main()
{
    int value1, value2;
    printf("enter A value1: ");
    scanf("%d", &value1);

    printf("enter a value2: ");
    scanf("%d",&value2);

    if ( value1 == value2)
    {
        printf(" value are a both ");
    }

    else if (100 <= value1 && value1 <= 200)
    {
        printf("value 1 is in range ");
    }
    else if (100 <= value2 && value2 <= 200)
    {
        printf(" value 2 is in range ");
    }
    return 0;
}