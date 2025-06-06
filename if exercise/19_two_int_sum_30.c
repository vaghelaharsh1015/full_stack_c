#include<stdio.h>
int main()
{
     int a,b ;
     printf("enter value of a  :");
     scanf("%d", & a  );

     printf("enter a value of b: ");
     scanf("%d",&b);

     if ( a == 30 )
     {
        printf(" a.\n");
     } 
     else if( b==30) 
     {
        printf ( "b.\n");
     } 
     else if ( a +b == 30)

     {
        printf(" sum =30.\n");
    
     }
    else
    {
        printf("not vaild ");
    }
    

     
     return 0;

}