#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int index;

    try
    {
        cout<<"enter arr index (0-4):";
        cin>>index;

        if (index<0||index>5)
        {
            throw"array index out of bounds!";
        }
        cout<<"arr["<<index<<"]="<<arr[index]<<endl;
    }
    catch(const char*error)
    {
        cout<<"exception:"<<error<<endl;
    }
    return 0;
}