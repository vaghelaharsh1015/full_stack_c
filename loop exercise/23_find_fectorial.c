#include <stdio.h>
int main()
{
    int val = 1, fect = 1;
    printf("enter a value : ");
    scanf("%d", &val);

    while (1 <= val)
    {

        fect = fect * val;
        val--;
    }
    printf("fect is=%d\n", &fect);
    return 0;
}