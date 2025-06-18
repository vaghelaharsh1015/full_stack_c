#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,-10,10},cnt;
    bool flag=true;
    
    for (int  i = 0; i<3; i++)
    {
        if (arr[i]<0)
        {
            flag=false;
            break;
        }
        
    }
        
    if(flag)
    {
        cout << " yes" << endl;
    }

    else
    {
        cout << " no" << endl;
    }
    return 0;
    
}