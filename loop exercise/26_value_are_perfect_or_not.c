// #include <stdio.h>
// int main()
// {
//     int i = 0, val, a = val, sum = 0;
//     printf("enter a value :");
//     scanf("%d", &val);

//     while (i < val)
//     {
//         if (val % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if (sum == a)
//     {
//         printf("value are perfect:");
//     }
//     else
//     {
//         printf("value are not perfect:");
//     }
//     i++;

//     return 0;
// }
#include <stdio.h>
int main()
{
    int i = 1, val, sum = 0;
    printf("enter a val:");
    scanf("%d", &val);

    while (i < val)
    {
        if (val % i == 0)
        {
           // printf("%d\n", i);
            sum = sum + i;
            printf("val=%d",val);
            // printf("val=%d\n", sum);
        }

        i++;
    }
    // {
    //     if (sum == val)
    //     {
    //         printf("value is perfect");
    //     }
    //     else
    //     {
    //         printf("value is not perfect");
    //     }
    // }

    return 0;
}