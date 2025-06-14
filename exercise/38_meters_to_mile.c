# include<stdio.h>
int main()
{ 
    float meter,km,mile;
    printf("enter a value  of meter :");
    scanf("%f",& meter);

    km=meter*1000;
    mile=km*100;

    printf("mile =%f", mile);
    return 0;
}