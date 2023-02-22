#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j < n){
				printf("%d, ", i*j);
			}
			else
    				printf("%d", i*j);
    		}
    		printf("\n");
    	}
}
