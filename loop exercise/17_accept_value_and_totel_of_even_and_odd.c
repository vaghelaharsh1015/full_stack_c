#include <stdio.h>
int main()
{
    int i = 1, val=0, con=0, odd=0, even=0;

    while (i <= 10)
    {
        printf("enter a value :");
        scanf("%d",& val);

        if (val % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
        i++;
    }
    printf("even=%d\n", even);
    printf("odd=%d\n",odd);
    return 0;
}