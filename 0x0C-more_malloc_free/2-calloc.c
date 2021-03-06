#include "holberton.h"

/**
 * _calloc - creates an array of chars.
 *
 * @size: unsigned size variable
 * @nmemb: variable
 *
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *n;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	n = malloc(nmemb * size);

	if (n == NULL)
		return (NULL);

	for (x = 0; x < (size * nmemb); x++)
		n[x] = 0;
	return (n);

}
