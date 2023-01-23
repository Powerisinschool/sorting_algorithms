#include "sort.h"

void sort(int *array, size_t low, size_t high, size_t size);
size_t partition(int *array, size_t low, size_t high, size_t size);
void swap(int *l_int, int *r_int);

/**
 * quick_sort - sort an array using the quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	if (array == NULL)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - recursively sorts the array
 * @array: array to sort
 * @low: lower index range
 * @high: higher index range
 * @size: size of array
 */
void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;

	if (low >= high)
		return;
	pivot = partition(array, low, high, size);
	if (pivot != 0)
		sort(array, low, pivot - 1, size);
	sort(array, pivot + 1, high, size);
}
/**
 * partition - divides an array into two
 * @array: array to divide
 * @low: lower index to start with
 * @high: higher index
 * @size: size of the array
 * Return: the pivot point in the array
 */

size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot_idx = 0;
	size_t i = 0;
	int pivot;

	pivot = array[high];
	pivot_idx = low;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			pivot_idx++;
			swap(array + pivot_idx - 1, array + i);
			if (pivot_idx - 1 != i)
			print_array(array, size);
		}
	}
	swap(array + pivot_idx, array + high);
	if (pivot_idx != high)
		print_array(array, size);
	return (pivot_idx);
}
/**
 * swap - swaps two integers
 * @l_int: left integer
 * @r_int: right integer
 */
void swap(int *l_int, int *r_int)
{
	int temp;

	temp = *l_int;
	*l_int = *r_int;
	*r_int = temp;
}
