//1026_보물
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main() 
{
	char sentence[1000] = { 0, };
	int num = 0;
	scanf("%s", &sentence);
	scanf("%d", &num);
	printf("%c", sentence[num-1]);
	return 0;
}