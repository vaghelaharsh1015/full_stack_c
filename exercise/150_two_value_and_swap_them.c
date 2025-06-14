
#include<stdio.h>
int main()
{
    int  a,b,c;
    printf("enter two nuber :");
    scanf("%d %d",&a,&b );

    c=a ;
    a=b;
    b=a;
    printf(" after a swapping : a=%d, b= %d\n", a,b);
    return 0;
}
