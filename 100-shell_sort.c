#include "sort.h"

/**
 * shell_sort - Function that sorts an array of integers in ascending order
 * using Shell sort algorithm with the Knuth sequence
 *
 * @array: Array to be sorted
 * @size: int
 */
void shell_sort(int *array, size_t size)
{
	int i, j, gap, temp, x = 0;

	/* Knuth sequence */
	for (gap = 1; gap < (int) size; gap = gap * 3 + 1)
		continue;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < (int) size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
		if (x > 0)
			print_array(array, size);
		else
			x++;
	}
}
