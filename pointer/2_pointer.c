#include<stdio.h>

int main()
{
    int a =10;
    int *p;

    p=&a;

    printf("before change :\n");
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);

    *p=20;

    printf("\nAfter change through pointer:\n");
    printf("a = %d\n", a); // a changed because p points to a
    printf("*p = %d\n", *p);

    return 0;

}