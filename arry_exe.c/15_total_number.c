#include<stdio.h>
int main()
{
   int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
   int count =0;

    for (int i = 0; i <12 ; ++i)
    {
        count++;
    }
    printf("%d",count);

    return  0;
}