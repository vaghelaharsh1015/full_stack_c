#include<iostream>
using namespace std;

int main()
{
    double num1,num2;
    char operation;

    try
    {
        cout<<"enter num1:";
        cin>>num1;
        cout<<"enter operation(+,-,*,/):";
        cin>>operation;
        cout<<"enter second number:";
        cin>>num2;

        double result;

        if (operation=='+')
        {
            result =num1+num2;
        }
        else if (operation=='-')
        {
            result =num1-num2;
        }
        else if (operation=='*')
        {
            result =num1*num2;
        }
        else if (operation=='/')
        {
            if (num2 ==0)
            {
                throw"cannot divide by 0";
            }
            result =num1/num2;
        }
        else
        {
            throw "invaild operation!";
        }
        
        cout<<"result:"<<result<<endl;
    }
    catch(const char*error)
    {
        cout<<"error:"<<error<<endl;
    }
    
    return 0;
}