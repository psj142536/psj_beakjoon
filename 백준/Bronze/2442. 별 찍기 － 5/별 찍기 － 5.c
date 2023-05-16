#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	int sum = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
			printf(" ");
		
		for (int j = 0; j < sum; j++)
			printf("*");
		sum += 2;
		printf("\n");
	}
	return 0;
}