#include "main.h"
/**
 * _isalphabet - function to check if c is a letter, loweercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
