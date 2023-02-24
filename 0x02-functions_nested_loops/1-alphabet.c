#include "main.h"
/**
 * print_alphabet - This program prints the alphabets in lowercase.
 * Return: 0
 * print_alphabet takes the place of main in this.
 * since it starts with void.
 * going to use the function _putchar since we need to print
 * using the for loop too since we're printing from a to z.
 * lower_letters represents what'll carry our desirable
*/

void print_alphabet(void)
{

char lower_letters;

for (lower_letters = 'a'; lower_letters <= 'z'; lower_letters++)

{
	_putchar(lower_letters);
}

	_putchar('\n');

}
