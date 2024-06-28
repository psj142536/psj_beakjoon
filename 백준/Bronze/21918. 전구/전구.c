#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int lights[4000] = { NULL, };
	int light_num = 0;
	int fuc_time = 0;
	
	int fuc_num = 0;
	int x = 0; 
	int y = 0;

	scanf("%d %d", &light_num, &fuc_time);

	for (int i = 0; i < light_num; i++)
		scanf("%d", &lights[i]);

	for (int i = 0; i < fuc_time; i++)
	{
		scanf("%d %d %d", &fuc_num, &x, &y);
		switch (fuc_num)
		{
			case 1:
				lights[x - 1] = y;
				break;

			case 2:
				for (int j = x - 1; j < y; j++)
				{
					if (lights[j] == 1)
						lights[j] = 0;

					else
						lights[j] = 1;
				}
				break;

			case 3:
				for (int j = x - 1; j < y; j++)
					lights[j] = 0;
				break;

			case 4:
				for (int j = x - 1; j < y; j++)
					lights[j] = 1;
				break;

			default:
				break;
		}
	}

	for (int i = 0; i < light_num; i++)
		printf("%d ", lights[i]);

	return 0;
}