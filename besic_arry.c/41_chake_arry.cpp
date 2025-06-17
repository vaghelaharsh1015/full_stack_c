#include<iostream>
using namespace std;
int main()
{
    int arr1[]={10,10,10};
    int arr2[]={10,15,10},cnt=0;

    for (int i = 0; i < 3; i++)
    {
        if (arr1[i]==arr2[i])
        {
            cnt++;
            
        }      
    }
    if(cnt==3)
    {
        cout << " yes" << endl;
    }

    else
    {
        cout << " no" << endl;
    }
    return 0;
}