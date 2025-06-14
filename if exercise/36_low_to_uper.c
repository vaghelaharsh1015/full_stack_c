#include <stdio.h>
int main()
{
    char  ch, alp;
    printf(" enter a ch :");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        alp=ch+32;
        printf("alp %c\n",alp);
    }
    else if (ch>='a' && ch<='z')
    {        
        alp=ch-32;
        printf("alp %c\n",alp);
    }
    else
    {
        printf("not vaild");
    }

    return 0;
}