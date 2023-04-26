#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write a program that prints _putchar, followed by a new line
 * &c: The character to print 
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
