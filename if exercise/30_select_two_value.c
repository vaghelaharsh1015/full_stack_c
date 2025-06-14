#include <stdio.h>
int main()
{
    int choice;
    printf(" select a one of thame  2or 3:");
    scanf("%d", &choice);

    if (choice == 2)
    {
        int a, b, sum;
        printf("enter a first  value:");
        scanf("%d",&a);

        printf(" enter a second  value  :");
        scanf("%d",&b);
        sum = a + b;

        printf("sum =%d\n", a + b);
    }

    else if (choice == 3)
    {
        int d,e,f, sum;
        printf(" enter a first value  :");
        scanf(" %d",&d);

        printf(" enter a second  value  :");
        scanf(" %d",&e);

        printf(" enter a thred  value  :");
        scanf(" %d",&f);

        sum = d+e+f;

        printf("sum =%d\n", d+e+f);
    }
    else
    {
        printf("not vaild");
    }

    return 0;
}