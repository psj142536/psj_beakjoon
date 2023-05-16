#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n-i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}