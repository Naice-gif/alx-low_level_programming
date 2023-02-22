#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int m = 0;
       	int a = 0;
	if(n < 15 && n > 0)
	{
		while (n >= a)
		{
			while (n >= m)
			{
				printf("%d,\t", m*a);
			 	m++;
			}
			printf("\n");
			a++;
		}
	}
}
