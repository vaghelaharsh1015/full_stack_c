#include <stdio.h>
int main()
{
    int a,b;
    printf("enter A : ");
    scanf("%d",&a);

    printf("enter  b: ");
    scanf("%d",&b);

    if ( 10<=a+b && a+b<=20)
    {
        printf( "it is in rang ") ;
    }

    else  
    {
        printf(" not vaild ");
    }
     
    return 0;
}