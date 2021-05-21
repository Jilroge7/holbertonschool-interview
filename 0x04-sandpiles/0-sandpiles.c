#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "sandpiles.h"
void stabilize_sandpiles(int grid[3][3]);
/**
* sandpiles_sum - function
* @grid1: sandpile to add
* @grid2: sandpile to addd to grid1
* Description: compues the sums of two sandpiles
* Return: sum
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;
	int rows = 3, columns = 3;
	/* bool stable = true;*/

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			/* if (grid1[i][j] > 3)*/
				/* stable = false;*/
		}
	}
	stabilize_sandpiles(grid1);
}

/**
* stabilize_sandpiles - function
* @grid: grid to stabilize
*
* Description: function to stabilize grid
* Return: nothing
*/
void stabilize_sandpiles(int grid[3][3])
{
	int rows, columns;

	for (columns = 0; columns < 3; columns++)
	{
		for (rows = 0; rows < 3; rows++)
		{
			if (grid[columns][rows] > 3)
			{
				grid[columns][rows] -= 4;

				if (columns - 1 >= 0)
					grid[columns - 1][rows] += 1;
			}
		}
	}
}
