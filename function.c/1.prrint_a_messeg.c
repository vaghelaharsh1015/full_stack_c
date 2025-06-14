#include <stdio.h> 
void printmesseg();
int main()
{
    printmesseg();
    printf("messeg by main.\n");
    printmesseg();

    return 0;

}
void printmesseg()
{
    printf(" messge by function.\n");
}