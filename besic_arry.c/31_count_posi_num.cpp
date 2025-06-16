#include<iostream>
using namespace std;
int main()
{
    int arr[6]={-10,-10,10,10,10,10};
    int count=0;

    for (int  i = 0; i < 6; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    cout<<""<<count;

    return 0;
}