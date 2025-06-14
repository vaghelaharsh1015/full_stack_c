#include<stdio.h>

int main()
{
float num ;
 printf ("enter a number : ");
 scanf("%f",& num );

  int intpart= (int)num ;
  float frcpart=  num-intpart ;
  
  printf("after desimal value %f");

 return 0;


}