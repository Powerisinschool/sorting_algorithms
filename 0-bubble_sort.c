#include "sort.h"

/**
 * bubble_sort - Sort an array using the bubble sort algorithm
 *
 * @array: Array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i < (int) size - 1; i++)
	{
		for (j = 0; j < (int) size - i - 1; j++)
		{
			tmp = array[j];
			if (tmp > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}

	}
}
