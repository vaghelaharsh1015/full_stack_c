#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("enter a : ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    printf("enter c : ");
    scanf("%d", &c);

    if (a == b)
    {
        sum == c;
        printf(" sum C ");
    }
    else if (b == c)
    {
        sum == a;
        printf("sum A");
    }
    else if (c == a)
    {
        sum == b;
        printf("sum B ");
    }

    else
    {
        sum = a + b + c;

        printf("result:%d\n", sum);
    }
    return 0;
}