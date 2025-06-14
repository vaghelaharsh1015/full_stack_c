#include<stdio.h>
int main()
{
    int i=1;
    // for ( i = 1; i < 5; i++)
    // {
    //     printf("%d\n",i);
    // }
    for(;;){
        printf("%d\n",i);
        if(i==12)
        break;
        i++;
    }
    return 0;

}