#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,10,10};

    for (int i = 0; i < 3; i++)
    {
        if (i==0)
        {
            arr[i]=100;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}