#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    int least = 0;
    int largest = 0;
    int sum = 0;
    int least_num = 0;


    scanf("%d", &least);
    scanf("%d", &largest);

    least_num = (largest + 1);

    for (float i = least; i <= largest; i += 1)
    {
        if ((sqrt(i) - (int)sqrt(i)) == 0)
        {
            if (i < least_num)
                least_num = i;

            sum += i;
        }
    }
    if (sum != 0)
        printf("%d\n%d", sum, least_num);

    else
        printf("-1");

    return 0;

}