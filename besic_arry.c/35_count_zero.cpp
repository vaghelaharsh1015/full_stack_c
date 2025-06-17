#include<iostream>
using namespace std;
int main()
{
    int arr[6]={0,2,10,0,5,0};
    int count=0;

    for (int  i = 0; i < 6; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
    }
    cout<<"zero is = "<<count;

    return 0;
}