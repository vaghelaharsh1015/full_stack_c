#include<stdio.h>

int main()
{
    int i,mxx,min;
    int arry[5]={10,4,2,3,15};

    mxx=arry[0];
    for (int i = 0; i<5 ; ++i)
    {
        if(arry[i]>mxx)
       mxx=arry[i];
    }
    printf("mxx=%d, ",mxx);

    min=arry[0];

    for (int i = 0; i < 5; ++i)
    {
        if(min>arry[i])
            min=arry[i];
    }
    printf("min=%d\n",min);

    return  0;
}