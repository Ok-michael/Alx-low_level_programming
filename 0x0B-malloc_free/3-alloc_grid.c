#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function returns a pointer to a 2D array of
 * integers with each element initalized to 0.
 * @width: this parameter specifies the width of the 2D array.
 * @height: the height of the 2D array.
 * Return: if width <= 0, height <= 0, or the function fails NULL
 * is returned otherwise - a pointer to a 2-D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_D;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_D = malloc(sizeof(int *) * height);

	if (two_D== NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		two_D[hgt_index] = malloc(sizeof(int) * width);

		if (two_D[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(two_D[hgt_index]);

			free(two_D);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			two_D[hgt_index][wid_index] = 0;
	}

	return (two_D);
}
