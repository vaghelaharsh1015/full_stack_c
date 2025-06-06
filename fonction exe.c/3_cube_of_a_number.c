#include<stdio.h>
void  printcube(int);

int main()
{
    int  val=0;
    printf("enter a value :");
    scanf("%d",&val);

    printcube(val);
    return  0;
}
void printcube(int val)
{
    int cube;

    cube =val*val*val;

    printf("%d is cube val",cube);
}


