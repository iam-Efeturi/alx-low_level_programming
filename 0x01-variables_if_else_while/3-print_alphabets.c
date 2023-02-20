#include <stdio.h>

/**
 * main - Entry point
 * using putchar cos all other functions are forbidden
 * using only stdio library
 * Return: 0
 * while a<=z means this condition runs from a to z
 */

int main(void)

{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
