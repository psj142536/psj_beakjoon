#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int basket[100] = { NULL, };
	int N = 0;
	int M = 0;
	int num = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		basket[i] = i + 1;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
			num = basket[b -1];
			basket[b - 1] = basket[a - 1];
			basket[a - 1] = num;
	}
	for (int i = 0; i < N; i++)
		printf("%d ", basket[i]);
	return 0;
}