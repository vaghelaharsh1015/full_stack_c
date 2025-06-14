# include<stdio.h>
int main()
{
    int val,sum=0,digit;
    printf("emter a value :");
    scanf("%d",&val);

    while (0<val)
    {
        digit=val%10;
        sum=sum+digit;
        val=val/10;
    }
    printf("sum=%d",sum);
    return 0;
    
}