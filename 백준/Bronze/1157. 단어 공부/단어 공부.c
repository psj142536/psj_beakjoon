#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char sentence[1000000] = {NULL,};
	int speling[100] = { NULL, };
	for (int i = 65; i <= 90; i++)
		speling[i - 65] = 0;
	scanf("%s", sentence);
	int length = strlen(sentence);
	for (int i = 0; i < length; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			if (sentence[i] == j || sentence[i] == j + 32)
			{
				speling[j - 65] += 1;
				break;
			}
		}
	}
	int most = 0;
	int most_speling = 0;
	for (int i = 0; i <= 25; i++)
	{
		if (speling[i] > most)
		{
			most = speling[i];
			most_speling = i;
		}
		else if (speling[i] == most)
			most_speling = -1;
	}
	if (most_speling == -1)
		printf("?");
	else
		printf("%c", most_speling + 65);
	return 0;
}