//1026_보물
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int A[1000] = { NULL, };
	int B[1000] = { NULL, };
	int least[1000] = { NULL, };
	int largest[1000] = { NULL, };
	int N = 0;
	int num = 0;
	int NUM = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < N; i++)
		scanf("%d", &B[i]);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (num <= A[j])
			{
				num = A[j];
				NUM = j;
			}
		}
		largest[i] = num;
		A[NUM] = 0;
		num = 0;
	}
	num = 101;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (num >= B[j])
			{
				num = B[j];
				NUM = j;
			}
		}
		least[i] = num;
		B[NUM] = 101;
		num = 101;
	}
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += least[i] * largest[i];
	printf("%d", sum);
	return 0;
}