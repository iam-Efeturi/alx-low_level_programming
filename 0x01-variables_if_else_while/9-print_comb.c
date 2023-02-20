#include <stdio.h>

/**
 * main - This program prints all possible combination of
 * single digits numbers (0-9)
 * not being able to use any variable type of char means using
 * i and by extension ASCII
 * since we need to put comma and space we add them by putchar
 * i.e putchar(',') and putchar(' ')
 * for single digit numbers, i is from 48-58
 * Return: 0 this means the program was successful
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
