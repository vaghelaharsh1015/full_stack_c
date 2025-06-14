#include <stdio.h>

void printint(int val)
{
    printf("the value is %d\n", val);
}
void printfloat(float val)
{
    printf("the value  is %.2f\n", val);
}

int main()
{
    printint(10);
    printfloat(10.15);

    printint(15);
    printfloat(15.10);

    return 0;
}
