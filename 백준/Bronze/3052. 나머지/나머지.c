//3052_나머지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int	numbers[10000] = { NULL, };
	int lefts[10000] = { NULL, };
	int sum = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &numbers[i]);
	for (int i = 0; i < 10; i++)
		numbers[i] = numbers[i] % 42;
	for (int i = 0; i < 10; i++)
		lefts[i] = 1001;
	lefts[0] = numbers[0];
	sum = 1;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (lefts[j] == numbers[i])
				break;
			else if (j == i)
			{
				lefts[j] = numbers[i];
				sum++;
			}
		}
	}
	printf("%d", sum);
	return 0;
}