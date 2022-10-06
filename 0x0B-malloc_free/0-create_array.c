#include "main.h"
#include <stdlib.h>
<<<<<<< HEAD
/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
#include "main.h"
#include <stdlib.h>
=======
>>>>>>> cf1d6f82f111a91bda10eef1f48e1a8ef1f57af0

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
<<<<<<< HEAD
}



=======
}
>>>>>>> cf1d6f82f111a91bda10eef1f48e1a8ef1f57af0
