#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, result, h, t, o;
	scanf("%d %d", &A, &B); 
	result = A;
	h = result / 100;
	result %= 100;
	t = result / 10;
	result %= 10;
	o = result;
	A = 100 * o + t * 10 + h;
	result = B;
	h = result / 100;
	result %= 100;
	t = result / 10;
	result %= 10;
	o = result;
	B = 100 * o + t * 10 + h;
	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);
	return 0;
}