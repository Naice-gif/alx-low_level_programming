#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int m = 0, x = 0;
	if(n < 15 && n > 0)
	{
		while (n >= x)
		{
			while (n >= m)
			{
				printf("%d,\t", m*x);
			 	m++;
			}
			printf("\n");
			x++;
		}
	}
}
