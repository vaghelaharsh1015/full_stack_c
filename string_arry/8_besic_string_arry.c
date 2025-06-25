#include <stdio.h>

int main()
{

    char *fruits[4] = {"Apple", "Banana", "Orange", "Mango"};

    printf("Fruits list:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i +1, fruits[i]);
    }

    return 0;
}