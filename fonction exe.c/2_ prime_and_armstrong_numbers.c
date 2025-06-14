#include<stdio.h>
void chekprime(int);

int main()
{
    int val=0;

    printf("enter a value :");
    scanf("%d",&val);

    chekprime(val);
    return 0;
}
void chekprime(int val)
{
    int i=0;
    for (i = 2; i < val ; i++)
    {
        if(val%i==0)
            break;
    }
    if(i==val)
        printf("is prime");
    else
        printf("not prime");
}
