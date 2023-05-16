#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M = 0, MAX = 0, num = 0;
	int numbers[10] = { NULL, };
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &M);
		numbers[i] = M;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (MAX < numbers[i])
		{
			MAX = numbers[i];
			num = i;
		}
	}
	printf("%d\n%d", MAX, num );
	return 0;
}