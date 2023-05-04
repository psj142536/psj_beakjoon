#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (a - i > j+1)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}