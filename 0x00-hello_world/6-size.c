#include<stdio.h>
/**
 * main - This is a program to print out the size of all the major variables in c
 * Return: 0 Return gives Zero (0) when the program is uccessful
 * Using printf to get the output to standard diplay
 * defining the variable but not giving it a value means it interpretes itself
 * sizeof gives the size of the whatever argument you input
 * we use \n to put in a new line too
*/

int main(void)
{
	char thisChar;
	int thisInt;
	long int thisLI;
	long long int thisLLI;
	float thisFloat;

	printf("Size of a char: %zu bytes\n", sizeof(thisChar));
	printf("Size of an int: %zu bytes\n", sizeof(thisInt));
	printf("Size of a long int: %zu bytes\n", sizeof(thisLI));
	printf("Size of a long long int: %zu bytes\n", sizeof(thisLLI));
	printf("Size of a float: %zu bytes\n", sizeof(thisFloat));

return (0);
}
