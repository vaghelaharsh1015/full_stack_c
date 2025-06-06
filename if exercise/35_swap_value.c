# include <stdio.h>
int main()
{
    int a,b;
    printf("enter a value of a:");
    scanf("%d",&a);

    printf("enter a value of b:");
    scanf("%d",&b);

    if(a==b){
        printf("not vaild");
    }
    else
    {
        a=a+b;
        b=a-b;
        a=a-b;
      printf("after swap a=%d\n",a);
       printf("after swap b=%d\n",b);
    }
    return 0;
    
}