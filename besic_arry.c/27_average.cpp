#include<iostream>
using namespace std;
int main()
{
    int arr[8]={10,8,9,10,12,15,12};
    int sum=0,avr=0;

    for (int i = 0; i < 8; i++)
    {
        sum=sum+arr[i];
        avr=sum/8;
    }
    cout<<" "<<avr;

    return 0 ;
}