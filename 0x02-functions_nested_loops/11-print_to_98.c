#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Prints from 0 to 98
 * Return: 0
 * @n: let our number be n (starting point)
*/

void print_to_98(int n)

{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
