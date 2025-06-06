#include<stdio.h>
int getaddition(int,int);
int getsubstraction(int,int);
int getdivion(int,int);
int getmultiplication(int,int);

int main()
{
    printf("addition is %d\n", getaddition(10,15));
    printf("substraction is %d\n", getsubstraction(10,12));
    printf("division is %d\n", getdivion(100,50));
    printf("multiplication is %d\n", getmultiplication(5,11));

    return  0;
}
int getaddition(int val1,int val2)
{
    return val1+val2;
}
int getsubstraction(int val1,int val2)
{
    return val1-val2;
}
int getdivion(int val1,int val2)
{
    return  val1/val2;
}
int getmultiplication(int val1,int val2)
{
    return  val1*val2;
}