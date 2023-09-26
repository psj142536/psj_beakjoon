#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int alpha[26] = { NULL, };
	char s[100];
	int j = 0;
	for (int j = 0; j < 26; j++)
	{
		alpha[j] = -1;
	}
	scanf("%s", &s);
	int length = strlen(s);
	while (j < length)
	{
		for (int i = 97;i <= 122;i++)
		{
			if (s[j] == i)
			{	
				if(alpha[i-97] == -1)
					alpha[i - 97] = j;
				break;
			}
		}
		j++;
	}
	for (int j = 0; j <= 122 - 97; j++)
	{
		printf("%d ", alpha[j]);
	}
	return 0;
}