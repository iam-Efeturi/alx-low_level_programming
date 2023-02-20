#include <stdio.h>

/**
 * main - This program prints the alphabets in lower case
 * with exceptions followed by newlne
 * using for and also ! to indicate the exceptions.
 * Return: 0. This program  gives 0 when successful
 */

int main(void)

{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')

			putchar(b);

	putchar('\n');

	return (0);
}
