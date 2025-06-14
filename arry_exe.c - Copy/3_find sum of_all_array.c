#include <stdio.h>
int main()
{
    int sum;
    int arr[5]={11,20,1,70,10};

    for (int i = 0; i<5 ; ++i)
    {
       sum +=arr[i];
    }
    printf("%d",sum);
    return  0;
}