#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0;

    try
    {
        if (b==0)
        {
            throw"division by 0 error";
        }
        int result = a/b;

        cout<<"result:"<< result <<endl;
    }
    catch(const char*msg)
    {
        cout <<"exception caught :"<<msg<<endl;
    }
    
    cout<<"program continues..."<<endl;

    return 0;
}