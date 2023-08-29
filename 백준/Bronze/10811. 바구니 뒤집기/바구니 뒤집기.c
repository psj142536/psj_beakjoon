//바구니 뒤집기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int basket = 0;
	int time = 0;
	int numbers[100] = {NULL, };
	int a, b, c;
	scanf("%d %d", &basket, &time);
	for (int i = 0; i < basket; i++)
	{
		numbers[i] = i + 1;
	}
	for (int i = 0; i < time; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = 0; j < (b - a)/2+1; j++)
		{
			c = numbers[a+j-1];
			numbers[a + j-1] = numbers[b - j-1];
			numbers[b - j-1] = c;
		}
	}
	for (int i = 0; i < basket; i++)
	{
		printf("%d ", numbers[i]);
	}
	return 0;
}