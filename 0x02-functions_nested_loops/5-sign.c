#include "main.h"

/**
 * print_sign - This program checks if the a number is positive or negative
 * Return: 1 if +ve, 0 if 0, -1 if negative
 * @n: n will be the desired number
 * there will be return statements for each condition
 * using an if statement for this
*/

int print_sign(int n)

{

if (n > 0)
	{
	_putchar('+');
	return (1);
	}

else if (n == 0)
	{
	_putchar('0');
	return (0);
	}

else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

return;
}
