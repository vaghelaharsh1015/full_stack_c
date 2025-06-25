#include<stdio.h>

int main()
{
    char line[10];

    printf("enter line of text:\n");

    fgets(line,sizeof(line),stdin);

    printf("you wrote=%s",line);

    return 0;
}