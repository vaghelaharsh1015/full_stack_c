#include<stdio.h>
int getval(int);

int main()
{
    int i;
    i= getval(10);
    printf("val=%d\n",i);

    printf("val=%d\n",getval(123));

    return 0;
}
int getval(int val)
{
    return  val;
}


