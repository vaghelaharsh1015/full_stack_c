#include <stdio.h>
int main()
{
    int val, rev = 0, digit = 0;
    printf("enter a  value:");
    scanf("%d", &val);

    while (val < 0)
    {
        rev = (rev * 10) + val % 10;
        val = val / 10;

        if (val == 0)
        {
            printf("zero");
        }
        else if (val == 1)
        {
            printf("one");
        }
        else if (val == 2)
        {
            printf("two");
        }
        else if (val == 3)
        {
            printf("three");
        }
        else if (val == 4)
        {
            printf("four");
        }
        else if (val == 5)
        {
            printf("five");
        }
        else if (val == 6)
        {
            printf("six");
        }
        else if (val == 7)
        {
            printf("sevan");
        }
        else if (val == 8)
        {
            printf("eight");
        }
        else if (val == 9)
        {
            printf("nine");
        }
        else
        {
            printf("not vaild");
        }
        printf("val=%d\n", val);

        return 0;
    }
}