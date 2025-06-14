#include<stdio.h>

int checkeven(int);

int main()
{
    int val = 0;
    int result=0;

    printf("enter a value :");
    scanf("%d",&val);

    result = checkeven(val);

    if(result==1)
        printf("the value is even ");

    else
        printf("value is odd");


    return 0;
}
int checkeven(int val)
{
    if(val %2 == 0)
        return 1;
    else
        return 2;

}