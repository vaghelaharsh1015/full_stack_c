#include<stdio.h>
int main ()
{
    int nuber ;
    printf("enter a value  of nuber :");
    scanf("%d",& nuber);

    if ( nuber % 5 == 0){
        printf("a value is devad by 5.\n ",nuber);
    }

    else 
     {
        printf(" a value of not devad by 5.\n ");
    }

    return 0;

}