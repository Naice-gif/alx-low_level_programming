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
	if(n < 15 && n > 0){
		while (0 <= n){
			while (n >= m){
				printf("%d,\t", m*n);
			 	m++;
			}
			printf("\n");
			n--;
		}
	}
}
