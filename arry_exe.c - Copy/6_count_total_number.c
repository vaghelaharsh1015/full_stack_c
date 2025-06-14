#include <stdio.h>
int main()
{
    int i,even,odd,count;
    int arr[5]={10,11,12,15,5};

    even=0;
    odd=0;

    for (int i = 0; i <5 ; ++i)
    {
      if (arr[i]%2==0)
          even ++;
      else
          odd ++;
    }
    printf("even=%d and odd=%d",even,odd);

    return  0;
}