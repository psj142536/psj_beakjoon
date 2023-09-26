#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int num = 0;
	char s[1000];
	int sum = 0;
	scanf("%d", &num);
	scanf("%s", &s);
	for (int i = num -1; i >= 0; i--)
	{
		sum += atoi(&s[i]);
		s[i] = 0;
	}
	printf("%d", sum);
	return 0;
}