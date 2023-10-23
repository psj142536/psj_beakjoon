#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int numbers[9][9] = { NULL, };
	int most = 0;
	int most_num1 = 0;
	int most_num2 = 0;
	for (int i = 0; i <= 8; i++)
		for (int j = 0; j <= 8; j++)
			scanf("%d", &numbers[i][j]);
	for (int i = 0; i <= 8; i++)
		for (int j = 0; j <= 8; j++)
		{
			if (most < numbers[i][j])
			{
				most = numbers[i][j];
				most_num1 = i;
				most_num2 = j;
			}
		}
	printf("%d\n", most);
	printf("%d %d", most_num1 + 1, most_num2 + 1);
	return 0;
}