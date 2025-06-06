#include <stdio.h>
int main (){
    int val;

    printf("enter a value =");
    scanf("%d",&val);

    int last_dijit = val % 10;
     printf(" last dijit of %d is %d\n,val, last_dijit");
     return 0;

}