#include "sort.h"

/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
