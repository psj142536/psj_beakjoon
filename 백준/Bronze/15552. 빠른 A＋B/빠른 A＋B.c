#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int first = 0, a = 0, b = 0;
	scanf("%d", &first);
	for (int i = 0; i < first; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}