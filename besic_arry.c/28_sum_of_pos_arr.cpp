#include<iostream>
int main()
{
    int arr[10]={10,10,10,10,10,-10,-10,-10,-10};
    int sum=0;

    for (int  i = 0; i < 10; i++)
    {
        if (arr[i]>0)
        {
            sum=sum+arr[i];
        }
        
    }
    std::cout <<""<<sum;
    return 0;
}