#include <stdio.h>
int main()
{
    char  opp;
    printf("emter a opp : ");
    scanf("%c", &opp);

    int a, b, ans;

    printf("enter A : ");
    scanf("%d", &a);

    printf("enter a b: ");
    scanf("%d", &b);

    if (opp == '+')
    {
        ans = a + b;
        printf("ans%d", ans);
    }
    else if (opp == '-')
    {
        ans = a - b;
        printf("ans%d", ans);
    }
    else if (opp == '*')
    {
        ans = a * b;
        printf("ans%d", ans);
    }
    else if (opp == '/')
    {
        ans = a / b;
        printf("ans%d", ans);
    }
    else if (opp == '%')
    {
        ans = a % b;
        printf("ans%d", ans);
    }
    else
    {
        printf("not vaild ");
    }

    return 0;
}