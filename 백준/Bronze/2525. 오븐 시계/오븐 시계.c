#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
int main()
{
    int h, m, t;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    int time = 60 * h + m;
    time = time + t;
    if (time >= 1440)
    {
        time = time - 1440;
    }
    h = time / 60;
    m = time % 60;
    printf("%d %d", h, m);
    return 0;
}
