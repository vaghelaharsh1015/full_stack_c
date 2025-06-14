#include<stdio.h>
int main ()
{
    int a ;
    printf("enter a value  of a :");
    scanf("%d",&a );

    if (0<a){
        printf("a value is posi .\n ");
    }

    else if (a<0)
    {
        printf(" a value of negative.\n ");
    }
    else {
        printf("tha naumer is zero.\n" );
    }

    return 0;

}