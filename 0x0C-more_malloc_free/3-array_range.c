#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered
 * from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The second value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 * Else - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + l;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
