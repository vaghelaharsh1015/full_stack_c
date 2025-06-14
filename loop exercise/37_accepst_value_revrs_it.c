#include<stdio.h>
int main()
{
    int  val,rev=0,digit;
    printf("enter a value:");
    scanf("%d",&val);

    while (0<val)
    {
        val%10;
        rev=( rev*10)+digit;
        val=val/10;

    }
    printf("rev=%d\n",rev);
    return 0;
    
}