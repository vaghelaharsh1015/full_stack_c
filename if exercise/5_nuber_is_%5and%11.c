#include<stdio.h>
int main ()
{
    int num ;
    printf("enter a value  of num :");
    scanf("%d",& num);

    if (num %5==0){
        printf("a value ic devad  by 5 .\n ");
    }

    else if ( num % 11==0){
        printf(" a value is devad  by 11.\n ");
    }
    else{
        printf("  a vlue is not devad by 5 and 11");
    }

    return 0;

}