# include<stdio.h>
int main()
{
    int kelvin,fah;
    printf("enter  a value of kelvin :");
    scanf("%d",kelvin);

    fah =(kelvin-273.15)*9/5+32;

    printf("fah = %d",fah);
    return 0;


}