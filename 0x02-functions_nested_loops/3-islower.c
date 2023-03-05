#include "main.h"

/**
 * _islower - This program checks if the input is lowercase
 * using char to signify the character
 * @c: c is the character we want to check
 * Return: 1 if lowercase, meaning yes, 0 if otherwise
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
