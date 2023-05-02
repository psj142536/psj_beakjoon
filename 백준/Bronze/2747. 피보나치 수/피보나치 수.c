#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number = 0, pn = 0, ppn = 1;
    scanf("%d", &number);
    for (int i = 1; i < number; i++)
    {
        ppn += pn;
        pn = ppn - pn;
    }
    printf("%d", ppn);
    return 0;
}