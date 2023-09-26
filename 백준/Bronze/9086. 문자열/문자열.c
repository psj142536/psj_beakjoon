#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		char s[1000];
		scanf("%s", &s);
		int length = strlen(s);
		printf("%c%c\n", s[0], s[length - 1]);
	}
	return 0;
}