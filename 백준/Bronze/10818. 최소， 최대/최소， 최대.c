#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, M = 0, MAX = 0, MIN = 0;
	int numbers[1000001] = { NULL, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &M);
		numbers[i] = M;
	}
	MAX = MIN = numbers[0];
	for (int i = 0; i < N; i++)
	{
		if (MAX < numbers[i])
			MAX = numbers[i];
		if (MIN > numbers[i])
			MIN = numbers[i];
	}
	printf("%d %d", MIN, MAX);
	return 0;
}