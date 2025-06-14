#include <stdio.h>
int main()
{
    int week ;
    printf("enter a week  :");
    scanf("%d", & week );
 
    if ( week==1) 
    {
        printf(" day =sunday \n");
    }
    else if( week ==2 )
    {
        printf(" day = monday \n");
    }
    else if (week ==3)
    {
       printf("day = tuseday") ;

    }
    else if( week == 4)
    {
        printf(" day = wedsday.\n");
    }
    else if( week ==5 )
    {
        printf(" day = thusday .\n");
    }
    else if( week ==6)
    {
        printf(" day = friday  .\n");
    }
    else if( week ==7 )
    {
        printf(" day = satrday .\n");
    }
    else{
        printf( "not vaild");
    }
    
    return 0;
}