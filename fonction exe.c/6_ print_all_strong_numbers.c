#include<stdio.h>

 void printstrongnum(int);

int main()
{
    int val;
     printstrongnum(val);

    return  0;
}
 void printstrongnum(int)
 {
     int  val, fact = 1, sum = 0, digit = 0, storng = 1,tmp;

     for ( storng= 1; storng <=1000; storng++)
     {
         val = storng;
         tmp=val;
         digit=0;
         sum=0;
         fact=1;

         while (val>0)
         {
             digit=val%10;

             while(digit >= 1)
             {
                 fact = fact * digit;
                 digit--;
             }
             sum = sum + fact;
             fact = 1;
             val=val/10;
         }
         if (sum==tmp)
         {
             printf("%d\n",tmp);
         }
     }
 }
