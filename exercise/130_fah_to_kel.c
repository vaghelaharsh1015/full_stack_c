#include<stdio.h>
int main()
{
    float  fah,kel;
    printf("enter a value of fah :");
    scanf("%f",& fah );

   kel= fah-32/1.8+273.15;

    printf(" kel=%f" ,kel);
    return 0;
}