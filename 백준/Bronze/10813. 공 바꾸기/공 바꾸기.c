#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int basket = 0, time = 0;
	char baskets[100] = { 0, };
	scanf("%d %d", &basket, &time);
	for (int i = 0; i < basket; i++)
	{
		baskets[i] = i+1;
	}
	for (int i = 0; i < time; i++)
	{
		int a, b, c;
		scanf("%d %d", &a, &b);
		c = baskets[a-1];
		baskets[a-1] = baskets[b-1];
		baskets[b-1] = c;
	}
	int i = 0;
	while (i < basket)
	{
		printf("%d ", baskets[i]);
		i++;
	}
	return 0;
}