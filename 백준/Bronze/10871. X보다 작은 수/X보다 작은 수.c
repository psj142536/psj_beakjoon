#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int numbers[10000] = { NULL, };
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
		scanf("%d", &numbers[i]);
	for (int i = 0; i < a; i++)
	{
		if (numbers[i] < b)
			printf("%d ", numbers[i]);
	}
	return 0;
}