#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int num;

    cout<<"enter a num:";
    cin>>num;

    for (int i = 0; i < 11; i++)
    {
        if (arr[i]<num)
        {
            cout <<" "<<arr[i];
        }
        
    }
    return 0;
}