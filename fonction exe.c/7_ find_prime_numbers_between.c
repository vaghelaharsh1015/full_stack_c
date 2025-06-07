#include <stdio.h>

void printprimenum(int);

int  main()
{
    int val;
    printprimenum(val);

    return  0;
}
void printprimenum(int val) {
    int i = 2, renge = 3;

    while (renge <= 100) {
        i = 2;
        val = renge;

        while (i < val) {

            if (val % i == 0)
                break;
            i++;
        }
        if (val == i) {
            printf("%d is prime\n", val);
        }
        renge++;
    }

}

