#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i, tmp, s = size;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				swapped = 1;
				print_array(array, s);
			}
		}
		size--;
	}
}
