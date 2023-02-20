#include <stdio.h>
/**
 * main - This program outputs numbers from 0-10 without
 * using prints or puts
 * i to indicate the number and conditions of i<10 to show
 * no two digit numbers
 * while is part of the stdio library
 * Return: 0 when successful
 * while uses ASCII and in that case 0 is 48 and 10 is 58
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
