#include "sort.h"

/**
 * selection_sort - Sort an array using the selection sort algorithm
 *
 * @array: Array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, tmp;

	if (size <= 1)
		return;

	for (i = 0; i < (int) size; i++)
	{
		min = i;
		for (j = i; j < (int) size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}