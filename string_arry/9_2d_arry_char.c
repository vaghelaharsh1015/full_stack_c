#include <stdio.h>

int main()
{

    char colors[3][10] = {"bleck", "white", "Blue"};

    printf("Available colors:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Color %d: %s\n", i + 1, colors[i]);
    }

    return 0;
}