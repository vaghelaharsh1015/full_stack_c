#include <stdio.h>
int main()
{
    int num = 0;
    printf("enter a num :");
    scanf("%d", &num);

    if (num > 0)
    {
        num=num*(-1);
    }
    else
    {
        num=num*(-1);
      
    }
    printf("%d\n",num);

    return 0;
}
