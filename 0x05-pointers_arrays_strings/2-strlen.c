#include "main.h"

/**
 * int _strlen - returns the lenght of a string
 * @s: lenght of a string to be found
 *
 * Return: returns the lenght of the @s
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
