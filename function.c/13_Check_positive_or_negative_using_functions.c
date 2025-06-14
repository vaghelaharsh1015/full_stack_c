#include <stdio.h>
int ispos(int);

int main()
{
    int result=0;

    result= ispos(10);

    if(result==1)
        printf("value is pos");
    else if(result==0)
        printf("value is neg");
    else
        printf("value is zero");

    return 0;
}
int ispos(int val)
{
    if(val>0)
        return 1;
    else if (val<0)
        return 0;
    else
        return 2;
}