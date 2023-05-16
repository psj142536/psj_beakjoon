#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int sum = n*2-1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		
		for (int j = sum; j > 0; j--)
			printf("*");
		sum -= 2;
		printf("\n");
	}
	return 0;
}