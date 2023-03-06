#include <stdio.h>
/**
 * main - checks for multiples of 3 and 5, then sums them
 * m is the limit
 * n is any of the desired multiples
 * total is the sum of these multiples
 * Return: 0 always
*/

int main(void)
{
int m = 1024, n, total = 0;
for (n = 0; n < m; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
total = total + n;
}
}
printf("%d\n", total);
return (0);
}
