#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,10,10};

    for (int i = 0; i<3; i++)
    {
        if (i==2)
        {
            arr[i]=-1;
        }       
    }
    for (int i = 0; i<3; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}