#include "main.h"

/**
 * print_last_digit - prints the last didgit of given number
 * Return: 0
 * Will divide the number by 10 and print the remainder
 * thinking return will be the above, the remainder.
 * @m: m is the number we're going to divide
*/

int print_last_digit(int m)

{
int digit;

if
	(m < 0)
	{
	digit = ((m * (-1)) % 10);
	_putchar (digit + '0');
	return (digit);
	}

else
	{
	digit = (m % 10);
	_putchar (digit + '0');
	return (digit);
	}
}
