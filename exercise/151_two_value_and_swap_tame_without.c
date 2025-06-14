
#include<stdio.h>
int main()
{
    int a,b  ;
    printf("enter two nuber  :");
    scanf("%d %d",&a ,&b );

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swap : a=%d,b=%d\n", a,b);
    return 0;
}