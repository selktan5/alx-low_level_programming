#include <stdio.h>
#include "main.h"
/**
* mul - multiplies two integers
* @a: first integer
* @b: second integer
* Return: addition of a and b
*/
int mul(int a, int b)
{
	return (a * b);
}

#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}


#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}

