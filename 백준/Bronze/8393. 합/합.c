#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		m = m + i;
	}
	printf("%d", m);
	return 0;
}