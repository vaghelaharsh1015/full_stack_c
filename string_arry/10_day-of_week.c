#include <stdio.h>

int main()
{

    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};

    printf("Days of the week:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %s\n", i + 1, days[i]);
    }

    return 0;
}