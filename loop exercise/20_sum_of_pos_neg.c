#include<stdio.h>
int main()
{
    int i=1,val,ps=0,ns=0;
    while (i<=10)
    {
        printf("enter a value :");
        scanf("%d",&val);

        if (val>0)
        {
            ps=ps+val;
        }
        else
        {
            ns=ns+val;
        }
        i++;
    }
    printf("ps=%d\n,",ps);
    printf("ns=%d\n",ns);
    return 0;
    
}