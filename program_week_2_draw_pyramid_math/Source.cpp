#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int num;
	scanf("%d", &num);
	for (int y = 0; y < num; y++)
	{
		for (int x = 1; x <= (2 * num) - 1; x++)
		{
			if (x == num - y || x == num + y)
			{
				printf("*");
			}
			else if (x > num - y && x < num + y)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}