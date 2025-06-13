#include<stdio.H>
int main()
{
    int i;

    int arry[5];

    arry[0]=10;
    arry[1]=10;
    arry[2]=15;
    arry[3]=15;
    arry[4]=25;

    for (int i = 0; i<5 ; ++i)
    {
       printf(" %d",arry[i]);
    }
    return  0;
}