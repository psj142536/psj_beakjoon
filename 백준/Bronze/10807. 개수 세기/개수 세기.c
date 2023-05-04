#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, sum = 0;
	int numbers[101] = { NULL, };
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		scanf("%d", &numbers[i]);
	scanf("%d", &b);
	for (int i = 0; i < a; i++)
	{
		if (numbers[i] == b)
			sum++;
	}
	printf("%d", sum);
	return 0;
}