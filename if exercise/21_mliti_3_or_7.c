#include<stdio.h>
int main()
{
     int num;
     printf("enter a positav num:");
     scanf("%d", &num);

     if ( num%3==0 )
     {
        printf(" muli by 3 ");
     }   
     else if(0<num %7==0)
     {
        printf("mulli by 7 ");
     }
     
     else
     {
        printf(" num  is not vaild ");
     }
     
     
     return 0;

}