#include "main.h"

/**
 * _strlen -length of a string
 * 0s: A pointer to an int that will be changed/updated
 *
 * Return: void that means our answer is correct
 */

int _strien(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

