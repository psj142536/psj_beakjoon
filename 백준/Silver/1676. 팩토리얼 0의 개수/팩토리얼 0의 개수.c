#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int number = 0;
    int five = 0;
    int two = 0;
    int ten = 0;
    int sum = 0;
    scanf("%d", &number);
    for (int i = number; i > 0; i--)
    {
        int copy = i;
        while (copy % 5 == 0)
        {
            five++;
            copy = copy / 5;
        }
    }
    for (int i = number; i > 0; i--)
    {
        int copy = i;
        while (copy % 2 == 0)
        {
            two++;
            copy = copy / 2;
        }
    }
    for (int i = number; i > 0; i--)
    {
        int copy = i;
        while (copy % 10 == 0)
        {
            ten++;
            copy = copy / 10;
        }
    }
    int same = 0;
    if (five > two)
        same = two;
    else
        same = five;
    printf("%d", same);
    return 0;
}