#include<stdio.h>
int main ()
{
    int a ,b,c;
    printf("enter a   value of a   :");
    scanf("%d",& a );

    printf("enter a   value of b   :");
    scanf("%d",& b);

    printf("enter a   value of c  :");
    scanf("%d",& c );

    if (a>b && a>c){
        printf(" maximum is a \n ", a );
    }

    else if (b>c && b>a )
    {
        printf(" amaximum is b\n ",b );
    }
    else if (c>a && c>b)
    {
        printf(" maximum is c\n",c);
    }
    else {
        printf(" value are eqval ");
    }

    return 0;

}