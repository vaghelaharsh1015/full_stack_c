#include <stdio.h>

void findhighest(int,int);
int main()
{
    findhighest(10,15);
    findhighest(45,10);
    findhighest(10,10);

    return  0;
}
void findhighest(int val1,int val2)
{
    if (val1>val2)
        printf("%d is hig than %d\n",val1,val2);
    else if(val2>val1)
        printf("%d is hig than %d\n",val2,val1);
    else
        printf("value are equal");
}