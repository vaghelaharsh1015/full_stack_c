#include <stdio.h>
int main()
{
    float unit, ch, src, totel;
    printf("enter a unit:");
    scanf("%f",&unit);

    if (unit <= 50)
    {
        ch = unit * 0.50;
    }
    else if (unit <= 150)
    {
        ch =25 + ((unit + 50)* 0.75);
    }
    else if (unit <= 250)
    {
        ch = 100+ ((unit- 150) * 1.20);
    }
    else if  (unit <= 250)
    {
        ch = 220+ ((unit- 250) * 1.50);
    }
 
  
    src=ch*0.20;
    totel=ch+src;

    printf(" bill : rs.%.2f",totel);
    
    return 0;
}
