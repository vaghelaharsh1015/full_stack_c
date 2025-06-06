#include <stdio.h>
int main()
{
    int amt, note;
    printf("enter a amt  :");
    scanf("%d",&amt);

    {
        note = amt / 500;
        amt = amt - (note * 500);
        printf(" 500=%d,", note);
    }
     if (amt >= 200)
    {
        note = amt / 200;
        amt = amt - (note * 200);
        printf(" 200=%d,", note)
    }
     if (amt >= 100)
    {
        note = amt / 100;
        amt = amt - (note * 100);
        printf("100=%d,", note);
    }
     if (amt >= 50)
    {
        note = amt / 100;
        amt = amt - (note * 50);
        printf("50=%d,", note);
    }
     if (amt >= 20)
    {
        note = amt / 20;
        amt = amt - (note * 20);
        printf(" 20=%d,", note);
    }
     if (amt >= 10)
    {
        note = amt / 10;
        amt = amt - (note * 10);
        printf("10=%d,", note);
    }
     if (amt >= 5)
    {
        note = amt / 5;
        amt = amt - (note * 5);
        printf("5=%d,", note);
    }
     if (amt >= 2)
    {
        note = amt / 2;
        amt = amt - (note * 2);
        printf("2=%d,", note);
    }
   return 0;
}
