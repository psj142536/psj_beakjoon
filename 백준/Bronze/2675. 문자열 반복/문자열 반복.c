#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int try = 0;
	char s[1000];
	int num = 0;
	scanf("%d", &try);
	for (int i = 0; i < try; i++)
	{
		scanf("%d", &num);
		scanf("%s", &s);
		int length = strlen(s);
		for (int j = 0; j < length; j++)
			for (int p = 0; p < num; p++)
				printf("%c", s[j]);
		printf("\n");
	}
	return 0;
}