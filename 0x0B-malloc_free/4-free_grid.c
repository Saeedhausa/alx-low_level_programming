#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2d array
 * @grid: width
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(width[i]);
	}
	free(width);
}
