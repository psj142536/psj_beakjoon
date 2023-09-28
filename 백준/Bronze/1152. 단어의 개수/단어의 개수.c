#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char s[1000000];
	scanf("%[^\n]s", &s);
	int length = strlen(s);
	int sum = 0;
	if (s[0] == ' ' && s[length - 1] == ' ')
	{
		for (int i = 0; i < length; i++)
			if (s[i] == ' ')
				sum++;
		sum -= 2;
	}
	else if (s[0] == ' ' || s[length - 1] == ' ')
	{
		for (int i = 0; i < length; i++)
			if (s[i] == ' ')
				sum++;
		sum -= 1;
	}
	else
	{
		for (int i = 0; i < length; i++)
			if (s[i] == ' ')
				sum++;
	}
	printf("%d", sum + 1);
	return 0;
}