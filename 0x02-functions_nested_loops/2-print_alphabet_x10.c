#include "main.h"

/**
 * print_alphabet_x10 - This program prints a-z 10x
 * Return: 0 Program returns 0 when successful
 * Its going to be a nested loop
 * m is the number of times i want it to print
 * letters will be the alphabets
*/

void print_alphabet_x10(void)

{
int m;
int letters;

m = 0;
while (m < 10)

{
for (letters = 'a' ; letters <= 'z' ; letters++)
{
_putchar(letters);
}

}

m++;
_putchar("\n");

return (0);
}
