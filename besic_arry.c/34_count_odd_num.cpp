#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,10,4,5,6};
    int count=0;

    for (int  i = 0; i < 6; i++)
    {
        if (arr[i]%2!=0)
        {
            count++;
        }
    }
    cout<<""<<count;

    return 0;
}