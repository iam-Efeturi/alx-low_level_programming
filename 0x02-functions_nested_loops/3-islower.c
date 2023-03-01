#include "main.h"

/**
 * main - This program checks if the input is lowercase
 * Return: 0
 * using char to signify the character
 * @c; c is the character we want to check
 * Return: 1 if lowercase, meaning yes, 0 if otherwise
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
