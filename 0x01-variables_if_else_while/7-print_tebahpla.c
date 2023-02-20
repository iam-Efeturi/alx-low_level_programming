#include <stdio.h>

/**
 * main - This is a prograam to print lowercase alphabets
 * in reverse without using print or puts
 * Using while and putchar instead
 * since we're going in reverse, we start from z and subtract (--)
 * Return: 0 successful
 * since we're going from z to a, the while condition
 * goes (while greater than a)
 */

int main(void)

{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');

	return (0);
}
