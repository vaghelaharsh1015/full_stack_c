#include <stdio.h>
int main()
{
    int num;
    printf("enter a value  of num :");
    scanf("%d", & num);

    if (num == 0)
    {

        printf(" a number is zero.\n");
    }

    else if (num % 2 == 0)
    {
        printf("a number is evan .\n ");
    }

    else
    {
        printf(" a  numer is odd .\n ");
    }

    return 0;
}