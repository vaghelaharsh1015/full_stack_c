#include<stdio.h>
int main ()
{
    char ch,a ,z;
    printf("enter a char :");
    scanf("%c",& ch );

    if (( a<=ch && z>=ch)==0)
    {
        printf("ch is alpabet.\n ",ch);
    }

    else  {
        printf("  ch is not alpabet.\n ",ch);
    }

    return 0;

}