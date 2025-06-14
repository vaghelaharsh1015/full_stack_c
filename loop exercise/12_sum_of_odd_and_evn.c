#include<stdio.h>
int main()
{
    int i=1,odd=0,even=0;
    while (i<=10)
    {
        if (i%2==0)
        {
            even=even+i;
        }
        else{
            odd=odd+i;
        }
        i++;
    }
    printf("sum of odd number is=%d & even number is =%d",odd,even);
    return 0;
    
}