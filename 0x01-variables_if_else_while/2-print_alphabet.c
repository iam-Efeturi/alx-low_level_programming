#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all the alphabets in lower case
 * followed by new line
 * putchar writes a single character to the standard output stdout
 * Return: 0 Code gives zero when successful
*/

int main(void)

{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
