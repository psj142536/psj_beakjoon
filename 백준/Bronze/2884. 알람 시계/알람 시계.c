#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int hour = 0;
	int min = 0;
	scanf("%d %d", &hour, &min);
	int sum = 60 * hour + min - 45;
	if (sum < 0)
		sum = 60 * 24 + sum;
	hour = sum / 60;
	min = sum % 60;
	printf("%d %d", hour, min);
	return 0;
}