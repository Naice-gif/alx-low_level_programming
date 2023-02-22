#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{

	int i;
	int j;

	if (n == 0)
	{
		printf("%d ", n);
		return;
	}

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					printf("%d,", i * j);
				else if (j > 0)
				{
					if (j < n)
					{
						printf("%4d,", i * j);
					}
					else if (j == n)
						printf("%4d", i * j);
				}
			}
			printf("\n");
		}
	}
}
