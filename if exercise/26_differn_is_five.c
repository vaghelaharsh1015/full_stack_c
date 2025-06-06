#include <stdio.h>
int main()
{
    int a,b;
    printf("enter A : ");
    scanf("%d", & a);

    printf("enter a b: ");
    scanf("%d",& b);

    
     if (a==b){
        printf(" value are eqval");
    }
    else if ( a== 5){
        printf("a");
    }

    else if ( b==5){
        printf("b");
    }
    else if (a+b==5 ){
        printf(" sum of 5 ");

    }
    else if ( a-b==5){
        printf(" difernt is 5 ");
    }

    else  
    {
        printf(" not vaild ");
    }
     
    return 0;
}