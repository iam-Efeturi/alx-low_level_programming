#include <stdio.h>
/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * we define two variables m and n for each part
 * of the two digit number
 * to make sure same digits dont appear, we remove
 * times when m = n
 * Return: 0 this signifies success
 */
int main(void)

{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		for (n = m; n < 58; n++)
		{
			if (m == n)
			{
				continue;
			}

			putchar(m);
			putchar(n);

			if (m == 56 && n == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
