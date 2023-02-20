#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: (1) This means the code returns 1 when successful
 * Imported the unistd library with stdio since we need a
 *  different command to print (using the write command)
 * write command needs us to know the total number of characters needed 
 * (hence the 59) the newline character must be included too.
 * we return 1 as per the instructions in the question
 */

int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
