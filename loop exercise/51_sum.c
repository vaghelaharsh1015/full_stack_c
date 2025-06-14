#include <stdio.h>
int main()
{
    int i , num, sum = 0;
    char choise = 'y' || 'n';

    printf(" enter  i value  :");
    scanf("%d", &i);

    for (i ; i < 11; i++)
    {
        printf("enter a number: ");
        scanf("%d", &num);

        sum += num;
        printf("sum=%d", sum);
    }

    // while (choise == 'y')
    // {
    //     printf("enter a number: ");
    //     scanf("%d", &num);

    //     sum += num;
    //     printf("sum=%d\n", sum);

    // }
    return 0;
}