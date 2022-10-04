#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and
 * intialize it with a specific char.
 * @size: size of array
 * @c: character to insert
 * Return: NULL if size is zero or if it fails
 * pointer to array if everything is normal
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	arry = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

