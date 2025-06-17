#include<iostream>
using namespace std;
int  main()
{
    int arr[]={10,-10,10,10,10};

    for (int i = 0; i < 5; i++)
    {

        if (arr[i]<0)
        {
            arr[i]=0;
        }

        }   
        for(int i=0;i<5;i++)
        {
        cout <<" "<<arr[i]; 
        }
    return 0;
}