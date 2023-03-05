#include "main.h"
/**
 * _abs - Program gives the abbsolute value of input
 * Return: 0 returns the absolute value when successful
 * in this case we're telling the function what to do
 * using if statements with 3 scenarios
 * @k: The desired input number
*/

int _abs(int k)

{
	if
		(k < 0)
	{
	return (k * (-1));
	}

	else if
		(k == 0)
	{
	return (0);
	}

	else
	{
	return (k);
	}
}
