#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money = 0;
	int value = 0;
	int yesterday = 0;
	int upper_day_count = 0;
	int down_day_count = 0;

	scanf("%d", &money);

	int min[2] = { NULL, };
	int jun[2] = { NULL, };

	min[0] = money;
	jun[0] = money;
	
	for (int i = 0; i < 14; i++)
	{
		scanf("%d", &value);
		
		if (value <= jun[0])
		{
			jun[1] += jun[0] / value;
			jun[0] -= value * (jun[0] / value);
		}

		if (down_day_count == 2 && yesterday > value)
		{
			down_day_count = 0;
			min[1] += min[0] / value;
			min[0] -= value * (min[0] / value);
		}

		else if (upper_day_count == 2 && yesterday < value)
		{
			upper_day_count = 0;
			min[0] += value * min[1];
			min[1] = 0;
		}

		else
		{
			if (yesterday < value)
			{
				upper_day_count++;
				down_day_count = 0;
			}

			else if (yesterday > value)
			{
				upper_day_count = 0;
				down_day_count++;
			}

			else
			{
				upper_day_count = 0;
				down_day_count = 0;
			}

		}

		yesterday = value;
		}
	
	min[0] += min[1] * value;
	jun[0] += jun[1] * value;
	
	if (min[0] > jun[0])
		printf("TIMING");
	
	else if (min[0] < jun[0])
		printf("BNP");

	else
		printf("SAMESAME");
	
	return 0;
}