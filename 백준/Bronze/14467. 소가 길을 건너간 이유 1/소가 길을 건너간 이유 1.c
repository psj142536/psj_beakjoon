#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int watch = 0;
	int cows[10] = {NULL,};
 
	int cow_num = 0;
	int cow_loca = 0;
	int moving = 0;

	for (int i = 0; i < 10; i++)
		cows[i] = 2;

	scanf("%d", &watch);

	for (int i = 0; i < watch; i++)
	{
		scanf("%d %d", &cow_num, &cow_loca);

		cow_num--;

		if (cows[cow_num] == 2)
		{
			cows[cow_num] = cow_loca;
			continue;
		}

		else
		{
			if (cows[cow_num] != cow_loca)
			{
				cows[cow_num] = cow_loca;
				moving++;
			}
		}
	}
	printf("%d", moving);
	return 0;
}