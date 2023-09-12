#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float origin_score[1000] = { 0, };
	float new_score[1000] = { 0, };
	float M = 0;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%f", &origin_score[i]);
	for (int i = 0; i < N; i++)
	{
		if (M < origin_score[i])
			M = origin_score[i];
	}
	for (int i = 0; i < N; i++)
		new_score[i] = origin_score[i] / M * 100;
	float sum = 0;
	for (int i = 0; i < N; i++)
		sum += new_score[i];
	printf("%f", sum / N);
	return 0;
}
