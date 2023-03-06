#include <stdio.h>
/**
 * main - print first 50 fibonacci
 * fibo is the sum
 * n and p are the starting points of the sequence
 * m is the sequence limit
 * Return: 0 always.
 */

int main(void)
{
long int m, n = 1, p = 2, fibo = 0;
for (m = 0; m < 49; m++)
{
printf("%ld, ", n);
fibo = n + p;
n = p;
p = fibo;
if (m == 48)
printf("%ld\n", n);
}
return (0);
}
