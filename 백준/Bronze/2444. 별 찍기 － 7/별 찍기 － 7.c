#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int num	 = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = num; i > 0;i--)
	{
		for (int j = 0; j < num - i +1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i - 3; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}