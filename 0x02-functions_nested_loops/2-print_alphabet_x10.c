#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10x
 * using nested loops
 * while is used to determine how many times we want
 * the cycle to repeat
 * for determines the action we want repeated
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int letters;
int cycle;


cycle = 0;
while (cycle < 10)
{
for (letters = 'a' ; letters <= 'z'; letters++)
{
_putchar(letters);
}

cycle++;
_putchar('\n');
}


}
