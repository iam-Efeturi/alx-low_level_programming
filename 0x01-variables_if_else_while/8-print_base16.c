#include <stdio.h>

/**
 * main - This program prints all alphabet part of
 * base 16 in lower case
 * followed by a new line
 * Return: 0 this shows the program runs successfully
*/

int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
