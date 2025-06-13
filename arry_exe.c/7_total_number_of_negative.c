#include <stdio.h>
int main()
{
    int i,pos,neg,count;
    int arr[5]={10,-11,-12,-15,5};

   pos=0;
   neg=0;

    for (int i = 0; i <5 ; ++i)
    {
        if (arr[i]>0)
            pos ++;
        else
            neg ++;
    }
    printf("pos=%d and neg=%d",pos,neg);

    return  0;
}