#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int integerType;
    	float floatType;
    	double doubleType;
    	char charType;
	long longIntegerType;
	long long longLongIntegertype;

   	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(longIntegerType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntegertype));
	printf("Size of a float: %ld byte(s)\n",sizeof(floatType));
	return (0);
}
