#include<stdio.h>
int main()
{
    float inch, cm,met;
    printf("enter a value of inch :");
    scanf ("%f",& inch);
     
     cm=inch/2.54;
     met=cm/100;

    printf(" met=%f", met );
    return 0;
}