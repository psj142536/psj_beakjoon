#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lights[100] = { NULL, };

int light_change(int num)
{
	if (lights[num] == 1)
		lights[num] = 0;

	else
		lights[num] = 1;
	
	return 0;
}

int male(int number,int light_num)
{
	for (int i = 1;(i * number - 1)< light_num; i++)
		light_change(i * number - 1);

	return 0;
}

int female(int number,int light_num)
{
	for (int i = 0; (number + i) <= light_num && (number - i) > 0; i++)
	{
		if (i == 0)
			light_change(number - 1);

		else if (lights[number + i - 1] == lights[number - i - 1])
		{
			light_change(number + i - 1);
			light_change(number - i - 1);
		}

		else if (lights[number + i - 1] != lights[number - i - 1])
			break;

	}

	return 0;
}

int main()
{
	int light_num = 0;
	int student_num = 0;

	scanf("%d", &light_num);

	for (int i = 0; i < light_num; i++)
		scanf("%d", &lights[i]);

	scanf("%d", &student_num);

	for (int i = 0; i < student_num; i++)
	{
		int gender = 0;
		int number = 0;

		scanf("%d %d", &gender, &number);

		if (gender == 1)
			male(number,light_num);

		else if (gender == 2)
			female(number,light_num);

	}

	for (int i = 0; i < light_num; i++)
	{
		printf("%d ", lights[i]);
		if (i % 20 == 19)
			printf("\n");
	}
	return 0;
}