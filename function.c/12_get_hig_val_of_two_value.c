#include <stdio.h>
int gethighest(int,int);

int main()
{
    printf("hig val=%d\n", gethighest(12,15));
    printf("hig val=%d\n", gethighest(10,14));

    return 0;
}
int gethighest(int val1,int val2)
{
    if(val1>val2)
        return  val1;
    else if(val2>val1)
        return val2;
}