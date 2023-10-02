#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int number[6] = { 1,1,2,2,2,8 };
	int find = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &find);
		number[i] -= find;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", number[i]);
	return 0;
}