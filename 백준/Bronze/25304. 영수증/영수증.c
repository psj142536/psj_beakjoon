#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		scanf("%d %d", &c, &d);
		e = e + c * d;
	}
	if (e == a)
		printf("Yes");
	else
		printf("No");
	return 0;
}