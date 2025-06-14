# include<stdio.h>
int main()
{
    char ch ;
    printf("enter a ch :");
    scanf("%c",& ch);

    if (ch>='a' && ch<='z'){
        printf( "this  is alphabet .\n");
    }

    else if (ch>='0' && ch <='9'){
        printf("this is nuber,\n");

    }
    else
    {
        
        printf(" this is special char");
    }
    return 0;
    
}