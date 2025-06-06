#include<stdio.h>
int main(){
    int value;
    printf("enter a value:");
    scanf("%d",&value );

    if(value <=100 || value>=200)
        printf(" exclusiv to 100 to 200");
    else 
        printf(" value are in 100 and 200");
    
     return 0;
    
    
}
