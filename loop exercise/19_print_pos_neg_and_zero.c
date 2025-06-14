#include <stdio.h>
int main()
{
    int i = 1, val, con=0,neg=0,pos=0;
    while (i <= 10)
    {
        printf("enter a value :");
        scanf("%d",&val);

        if (val<0)
        {
            neg++;
            
        }

        else if (0<val)
        {
            pos++;
        }
        else
        {
            con++;
        }
        i++;
    }
    printf("a totel of neg=%d\n,",neg);
    printf("a totel of pos=%d\n,",pos);
    printf("zero=%d\n");

    return 0;
}
