#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    bool flag=true;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i]++)
        {
            flag=true;
            break;
        }          
    }
    if (flag==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }    
    return 0;
}