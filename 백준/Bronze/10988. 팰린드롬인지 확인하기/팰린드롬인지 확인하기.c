#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i = 0;
	int result = 1;
	scanf("%s", s);
	int length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - i -1])
		{
			result = 0;
			break;
		}
	}
	printf("%d", result);
	return 0;
}