#include <stdio.h>

/**
 * main
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
               putchar(i);
        }

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar("char *\n");
	return (0);

}
