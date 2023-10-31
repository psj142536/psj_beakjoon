#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char change_alpha[100] = { NULL, };
	int n = 0;
	int number = 0;
	scanf("%s", change_alpha);
	while (change_alpha[n] != NULL)
	{
		if (change_alpha[n] == 'c' && change_alpha[n + 1] == '=')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 'c' && change_alpha[n + 1] == '-')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 'd' && change_alpha[n + 1] == 'z' && change_alpha[n + 2] == '=')
		{
			number++;
			change_alpha[n + 1] = '0';
			change_alpha[n + 2] = '0';
		}
		else if (change_alpha[n] == 'd' && change_alpha[n + 1] == '-')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 'l' && change_alpha[n + 1] == 'j')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 'n' && change_alpha[n + 1] == 'j')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 's' && change_alpha[n + 1] == '=')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] == 'z' && change_alpha[n + 1] == '=')
		{
			number++;
			change_alpha[n + 1] = '0';
		}
		else if (change_alpha[n] != '0')
			number++;
		n++;
	}
	printf("%d", number);
	return 0;
}