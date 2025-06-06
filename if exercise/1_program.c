#include<stdio.h>
int main()
{
    int a, b;
    printf("enter a value of a :");
    scanf("%d", &a);

    printf("enter a value of b :");
    scanf("%d",&b);

    if (a>b)
    {
        printf("maximum is %d\n,",a);
    }
    else if (b>a){

        printf("maximum is %d\n",b);
    }
    else
    {
        printf("value are eqval.\n");
    }
    return 0;
}