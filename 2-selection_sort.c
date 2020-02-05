#include "sort.h"

/**
 * selection_sort - sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
