#include<iostream>
using namespace std;

int main()
{
    int choice;

    try
    {
        cout<<"enter 1 for string error,2 for int error";
        cin>>choice;

        if (choice ==1)
        {
            throw"thise is a string exception!";
        }
        else if (choice == 2)
        {
            throw 404;
        }
        else
        {
            throw 3.14;
        }       
    }
    catch(const char *msg )
    {
        cout<<"string exception:"<<msg<<endl;
    }
    catch(int error)
    {
        cout<<"integer exception:"<<error<<endl;
    }
    catch(double error)
    {
        cout<<"double exception"<<error<<endl;
    }
    
    return 0;
    
}