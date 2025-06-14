#include<stdio.h>
int main()
{
     int  val;
     printf("enter a value  :");
     scanf("%d", & val  );

     if (val >=10 && val <=100)
     {
        printf(" value in 10 to  100");
     }   
     else if ( val>=10 && val<=200)

     {
        printf(" value in 10 to 200 ");
     }
     else
     {
          printf(" value is not vaild ");
     }
     
     
     return 0;

}