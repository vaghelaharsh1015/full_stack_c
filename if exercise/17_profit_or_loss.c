#include<stdio.h>
int main ()
{
    int expenc,incom;
    printf( "enter a value of expenc :");
    scanf("%d" ,& expenc);

    printf(" enter a value of incom :");
    scanf ("%d", & incom);

    if (expenc<incom){
        printf(" profit ");
    }

    else if (incom <expenc)
    {
        printf("loss");

    }

    else
    {
        printf("eqval");
    }
    return 0;
    
    
}