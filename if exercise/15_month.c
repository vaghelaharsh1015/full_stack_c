#include<stdio.h>
int main ()
{
    int mon ;
    printf("enter a value  of mon :");
    scanf("%d",& mon );

    if (mon ==  2 ){
        printf(" mon day = 28  or 29  \n ");
    }

    else if (mon == 1||mon ==3||mon ==5||mon ==7||mon ==8||mon ==10||mon ==12)
    {
        printf(" mon day = 31\n ");
    }
    else if (mon == 4||mon ==6||mon ==9||mon ==11)
    {
        printf(" mon day = 32\n ");
    }
    else
    {
        printf("not vaild ");
    }
    

    return 0;

}