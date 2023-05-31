#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT] = {NULL, };
    scanf("%s", s1);
    for(int i = 0;i < LEN_INPUT;i++)
    {
        if(s1[i] != NULL)
            printf("%c\n",s1[i]);
    }
    return 0;
}
