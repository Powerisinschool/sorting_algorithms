#include "sort.h"

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
			if (tmp > array[j+1])
			{
				array[j] = array[j+1];
				array[j+1] = tmp;
				print_array(array, size);
			}
		}

	}
}