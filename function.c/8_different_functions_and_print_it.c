#include<stdio.h>
#include<stdbool.h>

void printinteger(int);
void printlong(long);
void printfloat(float);
void printdouble(double);
void printcharacter(char);
void printstering(char[]);
void printboolean(bool);

int main()
{
    int ival=10;
    float fval=10.15;
    long lval=101010;
    double dval=1015.11;
    char message[]="harsh";
    char cval='a';
    bool bval=true;
     
    printinteger(ival);
    printfloat(fval);
    printlong(lval);
    printdouble(dval);
    printcharacter(cval);
    printstering(message);
    printboolean(bval);

    return 0;
}
void printinteger(int val)
{
    printf("the value is %d\n",val);
}
void printlong(long val)
{
    printf("the value is %ld\n",val);
}
void printfloat(float val)
{
    printf("the value is %.2f\n",val);
}
void printdouble(double val)
{
    printf("the value is %.2fl\n",val);
}
void printcharacter(char val)
{
    printf("the value is %c\n",val);
}
void printstering(char val[])
{
    printf("the value is %s\n",val);
}
void printboolean(bool val)
{
    printf("the val is %d\n",val);
}
