#include<stdio.h>
int main ()
{
    int age ;
    printf("enter a value  of age :");
    scanf("%d",& age );

    if (age>18){
        printf("age is veild for voting \n ");
    }

    else if (age<18){
        printf(" age is not velid for voting\n ");
    }

    return 0;

}