#include<stdio.h>
// void printVal(int);

void printVal(int);

int main()
{
    printVal(25);
    printVal(43);
    
    return 0;
}


void printVal(int val)
{
    printf("The value is %d\n", val);
}