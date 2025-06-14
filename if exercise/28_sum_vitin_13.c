#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);

    printf("enter b : ");
    scanf("%d", &b);

    printf("enter c :");
    scanf("%d", &c);

    int sum;

    if (a == 13)
    {

        a = 0;
        sum = a + b + c;
        
    }
    else if (b == 13)
    {
        b = 0;
        sum = a + b + c;
    
    }
    else if (c == 13)
    {
        c = 0;
        sum = a + b + c;
    }

    else
    {
        sum = a + b + c;
    }

    printf("  sum %d\n", sum);
    return 0;
}