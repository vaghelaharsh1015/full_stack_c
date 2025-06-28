#include<iostream>
using namespace std;

int main()
{
    int age;

    try
    {
        cout<<"enter your age:";
        cin>>age;

        if (age<0)
        {
            throw -1;
        }
        if (age >150)
        {
            throw 999;
        }
        if (age==0)
        {
            throw 0;
        }
                
        cout<<"your age is :"<<age <<endl;
    }
    catch(int errorcode)
    {
        if (errorcode==-1)
        {
            cout<<"error:age can not be negtive!"<<endl;
        }
        else if (errorcode==999)
        {
            cout<<"error:age seem too high!"<<endl;
        }
        else if (errorcode==0)
        {
            cout<<"error:age is can not 0"<<endl;
        }
                
    }
    return 0;
}