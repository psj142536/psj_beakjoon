#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, M = 0, i = 0, j = 0, k = 0;
	int record[100000] = { 0, };
	scanf("%d %d", &N, &M);
	for (int p = 1; p <= M; p++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int time = i; time <= j; time++)
		{
			record[time] = k;
		}
	}
	int number = 1;
	while (1)
	{
		printf("%d ", record[number]);
		number++;
		if (record[number] == NULL && number > N)
			break;
	}
	return 0;
}