#include <stdio.h>

/**
 * main - This program prints all single digits from 0 - 10
 * using for (going from 0 -9) (10 is double digits)
 * for goes with %i. i means for the value at that time.
 * Return: 0 program is successful
 */

int main(void)

{
	int a;

	for (a = 0; a < 10; a++)
	printf("%i", a);

	printf("\n");

	return (0);
}
