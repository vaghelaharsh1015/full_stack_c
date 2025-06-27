#include <stdio.h>

int main()
{
    int marks[4][3] = {
        {85, 90, 78}, 
        {92, 88, 85}, 
        {76, 82, 90}, 
        {88, 85, 92}  
    };

    printf("Student Marks Table:\n");
    printf("===================\n");
    printf("Student\tMath\tScience\tEnglish\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}