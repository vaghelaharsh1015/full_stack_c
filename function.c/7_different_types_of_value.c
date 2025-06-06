
#include <stdio.h> 
#include <stdbool.h>
void printInteger(int);  
void printLong(long);  
void printFloat(float);  
void printDouble(double);  
void printCharacter(char);  
void printString(char[]);  
void printBoolean(bool);  
int main() 
{ 
printInteger(25); 
printInteger(6356); 
printFloat(32.45); 
printDouble(5221.75); 
printCharacter('A'); 
printString("Welcome"); 
printBoolean(true); 
return 0; 
} 
void printInteger(int val)          
{     
printf("The value is %d\n", val); 
} 
void printLong(long val)          
{     
printf("The value is %ld\n", val); 
} 
void printFloat(float val)          
{     
printf("The value is %.2f\n", val); 
} 
void printDouble(double val)          
{     
printf("The value is %.2lf\n", val); 
} 
void printCharacter(char val)          
{     
printf("The value is %c\n", val); 
} 
void printString(char val[])          
{     
printf("The value is %s\n", val); 
} 
void printBoolean(bool val)          
{     
printf("The value is %d\n", val); 
}