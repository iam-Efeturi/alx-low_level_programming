#include <stdio.h>
/**
 * main - This program outputs numbers from 0-10 without
 * using prints or puts
 * i to indicate the number and conditions of i<10 to show
 * no two digit numbers
 * while is part of the stdio library
 * Return: 0 when successful
*/

int main(void)
{
	int i = 20;

	while (i < 20)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
