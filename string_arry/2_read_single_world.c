#include<stdio.H>
int main(int argc, char const *argv[])
{
    char name[50];

    printf("enter your name:");
    scanf("%49s",name);

    printf("your entered:%s\n",name);
    return 0;
}
