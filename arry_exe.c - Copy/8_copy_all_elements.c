#include<stdio.h>
int main()
{
    int i;

    int arry1[5]={10,15,10,15,10};

    int arry2[5]={15,10,15,10,15};

    arry1[i]==arry2[i];

//    for (int i = 0; i <5 ; ++i)
//    {
//        arry1[i]==arry2[i];
//
//    }
    for (int i = 0; i <5 ; ++i)
    {
        printf("%d",arry1[i]);
    }
    return  0;
}