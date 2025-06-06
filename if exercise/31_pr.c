#include <stdio.h>
int main()
{
    int eng=0, math=0, scince=0, hic=0, com=0, pr=0, totelmark=0  ;
    printf(" enter a your   math mark  ");
    scanf("%d",&eng);

    printf(" enter a your scince mark  ");
    scanf("%d",&scince);

    printf(" enter a your   hic mark  ");
    scanf("%d",&hic);

    printf(" enter a your  eng mark  ");
    scanf("%d",&eng);

    printf(" enter a your com  mark  ");
    scanf("%d",&com);

   totelmark=eng+scince+math+hic+com;
    pr=totelmark/5;

    printf(" totelmark=%d", totelmark);

    printf(" pr = %d ", pr);

    if (pr>=90)
    {
        printf(" gred a+");
    }
    else if (pr>=80)
    {
        printf(" gred a");
    }
    else if (pr>=70)
    {
        printf(" gred b");
    }
    else if (pr>=60)
    {
        printf(" gred c");
    }
    else if (pr>=40)
    {
        printf(" gred d");
    }
    else
    {
        printf(" fail");
    }

    return 0;
}