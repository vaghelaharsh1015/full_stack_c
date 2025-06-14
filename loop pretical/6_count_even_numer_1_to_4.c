#include <stdio.h>
int main()
{
    int i = 1, cnt = 0;
    // while (i <= 5)
    // {
    //     if (i % 2 == 0)
    //         cnt++;
    //     i++;
    // }
    for ( i= 1;i<=5;i++){
        if (i%2==0)
        cnt++;
    }
    printf("totel evan numbers are %d\n", cnt);
    return 0;
}