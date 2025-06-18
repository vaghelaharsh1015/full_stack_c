#include<iostream>
using namespace std;
int main()
{
    int arr1[]={10,10,10};
    int arr2[]={};

    for (int i = 0; i < 3; i++)
    {
        arr1[i]=arr2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<" "<<arr2[i];
    }
    

    return 0;
}