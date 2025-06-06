# include<stdio.h>
int main()
{
    int salary=0;
    printf(" enter a your salary:");
    scanf("%d",&salary );

    if( salary<=10000){
        printf(" hra=20 ,da=80");
    }
    else if ( salary<=20000){
        printf(" hra =25, da=90");
    }
    else if ( salary >20000){
        printf(" hra=30,da=95");
    }
    else
    {
        printf("not vaild ");
    }
    
}
